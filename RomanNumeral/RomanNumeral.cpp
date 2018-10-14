#include "RomanNumeral/RomanNumeral.hpp"

namespace dejero
{
namespace tools
{
	
std::string RomanNumeral::ConvertArabic(int number) const
{
	if (number == 1)
	{
		return "I";
	}
	else
	{
		return "II";
	}
}

} // namespace tools
} // namespace dejero
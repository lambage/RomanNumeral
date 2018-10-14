#include "RomanNumeral/RomanNumeral.hpp"

namespace dejero
{
namespace tools
{
	
std::string RomanNumeral::ConvertArabic(int number) const
{
	auto roman = std::string{};
	while (number >= 10)
	{
		number -= 10;
		roman += "X";
	}
	while (number >= 1)
	{
		number -= 1;
		roman += "I";
	}
	return roman;
}

} // namespace tools
} // namespace dejero
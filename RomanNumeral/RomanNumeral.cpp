#include "RomanNumeral/RomanNumeral.hpp"
#include <vector>

namespace dejero
{
namespace tools
{
	
std::string RomanNumeral::ConvertArabic(int number) const
{
	if (number < 1 || number >= 4000)
	{
		throw std::runtime_error("number out of range");
	}
	std::string roman = {};

	const std::vector<std::pair<std::string, int>> conversionMap =
	{
		std::make_pair<std::string, int>("M", 1000),
		std::make_pair<std::string, int>("CM", 900),
		std::make_pair<std::string, int>("D", 500),
		std::make_pair<std::string, int>("CD", 400),
		std::make_pair<std::string, int>("C", 100),
		std::make_pair<std::string, int>("XC", 90),
		std::make_pair<std::string, int>("L", 50),
		std::make_pair<std::string, int>("XL", 40),
		std::make_pair<std::string, int>("X", 10),
		std::make_pair<std::string, int>("IX", 9),
		std::make_pair<std::string, int>("V", 5),
		std::make_pair<std::string, int>("IV", 4),
		std::make_pair<std::string, int>("I", 1)
	};

	for (auto it : conversionMap)
	{
		while (number >= it.second)
		{
			roman += it.first;
			number -= it.second;
		}
	}
	return roman;
}

} // namespace tools
} // namespace dejero
#include "RomanNumeral/RomanNumeral.hpp"
#include <vector>

namespace dejero
{
namespace tools
{
	
std::string RomanNumeral::ConvertArabic(int number) const
{
	const auto table = std::vector<std::pair<int, std::string>>
	{
		std::make_pair(1000, "M"),
		std::make_pair(900, "CM"),
		std::make_pair(500, "D"),
		std::make_pair(100, "C"),
		std::make_pair(90, "XC"),
		std::make_pair(50, "L"),
		std::make_pair(40, "XL"),
		std::make_pair(10, "X"),
		std::make_pair(9, "IX"),
		std::make_pair(5, "V"),
		std::make_pair(4, "IV"),
		std::make_pair(1, "I")
	};
	auto roman = std::string{};
	for (auto it : table)
	{
		while (number >= it.first)
		{
			number -= it.first;
			roman += it.second;
		}
	}
	return roman;
}

} // namespace tools
} // namespace dejero
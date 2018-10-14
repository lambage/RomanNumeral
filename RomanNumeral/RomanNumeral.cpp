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
		std::make_pair(10, "X"),
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
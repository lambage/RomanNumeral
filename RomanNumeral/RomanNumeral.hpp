#pragma once

#include "RomanNumeral/IRomanNumeral.hpp"

namespace dejero
{
namespace tools
{
	
class RomanNumeral :
	public IRomanNumeral
{
public:
	RomanNumeral() = default;
	~RomanNumeral() = default;
	
	std::string ConvertArabic(int number) const override;
};

} // namespace tools
} // namespace dejero
#pragma once

#include <string>

namespace dejero
{
namespace tools
{
	
class IRomanNumeral
{
public:
	virtual ~IRomanNumeral() = default;
	
	virtual std::string ConvertArabic(int number) const = 0;
};

} // namespace tools
} // namespace dejero
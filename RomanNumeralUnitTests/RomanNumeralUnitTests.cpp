#include "gmock/gmock.h"
#include "RomanNumeral/RomanNumeral.hpp"

using namespace ::testing;
using namespace dejero::tools;

class RomanNumeralUnitTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		m_RomanNumeral = std::make_unique<RomanNumeral>();
	}

	void TearDown() override
	{
		m_RomanNumeral = nullptr;
	}

	std::unique_ptr<IRomanNumeral> m_RomanNumeral;
};

TEST_F(RomanNumeralUnitTest, CanConvert)
{
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(1), Eq("I"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(2), Eq("II"));
}

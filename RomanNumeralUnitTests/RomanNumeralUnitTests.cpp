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
	// EXPECT_THAT will continue running without returning, so we will use that since
	// there aren't many differences in the tests
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(4), Eq("IV"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(2), Eq("II"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(3), Eq("III"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(1), Eq("I"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(5), Eq("V"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(6), Eq("VI"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(9), Eq("IX"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(10), Eq("X"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(100), Eq("C"));

	EXPECT_THAT(m_RomanNumeral->ConvertArabic(5), Eq("V"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(9), Eq("IX"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(12), Eq("XII"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(16), Eq("XVI"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(29), Eq("XXIX"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(44), Eq("XLIV"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(45), Eq("XLV"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(68), Eq("LXVIII"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(83), Eq("LXXXIII"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(97), Eq("XCVII"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(99), Eq("XCIX"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(500), Eq("D"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(501), Eq("DI"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(649), Eq("DCXLIX"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(798), Eq("DCCXCVIII"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(891), Eq("DCCCXCI"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(1000), Eq("M"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(1004), Eq("MIV"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(1006), Eq("MVI"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(1023), Eq("MXXIII"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(2014), Eq("MMXIV"));
	EXPECT_THAT(m_RomanNumeral->ConvertArabic(3999), Eq("MMMCMXCIX"));
}

TEST_F(RomanNumeralUnitTest, DoesNotConvert)
{
	// EXPECT_THAT will continue running without returning, so we will use that since
	// there aren't many differences in the tests
	EXPECT_THROW(m_RomanNumeral->ConvertArabic(0), std::runtime_error);
	EXPECT_THROW(m_RomanNumeral->ConvertArabic(-1), std::runtime_error);
	EXPECT_THROW(m_RomanNumeral->ConvertArabic(-100), std::runtime_error);
	EXPECT_THROW(m_RomanNumeral->ConvertArabic(4000), std::runtime_error);
}


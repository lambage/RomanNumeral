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
}

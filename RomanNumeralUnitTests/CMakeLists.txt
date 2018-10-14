

set(SourceFiles RomanNumeralUnitTests.cpp
)

add_executable(RomanNumeralUnitTests ${SourceFiles})

target_link_libraries(RomanNumeralUnitTests RomanNumeral gtest gmock_main)

add_test(NAME RomanNumeralTests COMMAND RomanNumeralUnitTests)
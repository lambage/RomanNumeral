set(SourceFiles RomanNumeral.cpp RomanNumeral.hpp IRomanNumeral.hpp
)

add_library(RomanNumeral ${SourceFiles})

target_include_directories(PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

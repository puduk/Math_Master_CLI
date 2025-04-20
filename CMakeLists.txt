cmake_minimum_required(VERSION 4.0)
project(Math_App)

set(CMAKE_CXX_STANDARD 20)

add_executable(Math_App main.cpp utils/Binary.cpp utils/Calculator.cpp utils/Char_Number.cpp utils/Circle.cpp utils/Dice_Roller.cpp utils/Digit_Control.cpp utils/Divider_Shower.cpp utils/Even_Numbers.cpp utils/Exponentiation.cpp
                                 utils/Factorial.cpp utils/Gcd.cpp utils/Lcm.cpp utils/menu.cpp utils/Number_Comparing.cpp utils/Number_Guess.cpp utils/Odd_Numbers.cpp utils/Palindrome.cpp utils/Perfect_Number.cpp utils/Prime_Number.cpp
                                 utils/Rectangle.cpp utils/Reverse_Number.cpp utils/Rock_Paper_Scissors.cpp utils/Roman_numeral.cpp utils/Square.cpp utils/Square_Root.cpp utils/Triangle.cpp

)

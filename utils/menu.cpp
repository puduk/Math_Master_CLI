#include "menu.hpp"
#include <iostream>

void menu(){

  int menu_choice;

  std::cout << "-----------------------------------------------" << std::endl;
  std::cout << "|  1  for Calculator                          |" << std::endl;
  std::cout << "|  2  for Circle Area                         |" << std::endl;
  std::cout << "|  3  for Triangle Area                       |" << std::endl;
  std::cout << "|  4  for Square Area                         |" << std::endl;
  std::cout << "|  5  for Rectangle Area                      |" << std::endl;
  std::cout << "|  6  for Number Comparison                   |" << std::endl;
  std::cout << "|  7  for Number Guessing Game                |" << std::endl;
  std::cout << "|  8  for Square Root                         |" << std::endl;
  std::cout << "|  9  for Exponentiation                      |" << std::endl;
  std::cout << "|  10 for Factorial Calculation               |" << std::endl;
  std::cout << "|  11 for Dice Roller                         |" << std::endl;
  std::cout << "|  12 for Printing Odd Numbers                |" << std::endl;
  std::cout << "|  13 for Printing Even Numbers               |" << std::endl;
  std::cout << "|  14 for Prime Number Check                  |" << std::endl;
  std::cout << "|  15 for GCD (Greatest Common Divisor)       |" << std::endl;
  std::cout << "|  16 for LCM (Least Common Multiple)         |" << std::endl;
  std::cout << "|  17 for Rock-Paper-Scissors Game            |" << std::endl;
  std::cout << "|  18 for Palindrome Check                    |" << std::endl;
  std::cout << "|  19 for Reversing a Number                  |" << std::endl;
  std::cout << "|  20 for Digit Count                         |" << std::endl;
  std::cout << "|  21 for Printing Binary Representation      |" << std::endl;
  std::cout << "|  22 for Printing ASCII Value of a Character |" << std::endl;
  std::cout << "|  23 for Showing the Divisors of a Number    |" << std::endl;
  std::cout << "|  24 for Perfect Number Check                |" << std::endl;
  std::cout << "|  25 for Roman Numeral Conversion            |" << std::endl;
  std::cout << "|  26 for Quit                                |" << std::endl;
  std::cout << "-----------------------------------------------" << std::endl;
  std::cout << "Enter your choice: ";
  std::cin >> menu_choice;



  switch(menu_choice) {
    case 1:
        calculator();
        break;
    case 2:
        circle();
        break;
    case 3:
        triangle();
        break;
    case 4:
        square();
        break;
    case 5:
        rectangle();
        break;
    case 6:
        number_comparing();
        break;
    case 7:
        number_guess();
        break;
    case 8:
        square_root();
        break;
    case 9:
        exponentiation();
        break;
    case 10:
        factorial();
        break;
    case 11:
        dice_roller();
        break;
    case 12:
        odd_numbers();
        break;
    case 13:
        even_numbers();
        break;
    case 14:
        prime_number();
        break;
    case 15:
        gcd_number();
        break;
    case 16:
      lcm_number();
        break;
    case 17:
        rock_paper_scissors();
        break;
    case 18:
        palindrome();
        break;
    case 19:
        ReverseNumber();
        break;
    case 20:
        digit_control();
        break;
    case 21:
        binary();
        break;
    case 22:
        char_number();
        break;
    case 23:
        divider_shower();
        break;
    case 24:
        perfect_number();
        break;
    case 25:
        roman_numeral();
        break;
    case 26:
        std::cout << "Quiting...";
        exit(0);
    default:
        std::cout << "Invalid choice. Please select a valid option." << std::endl;
        break;
}
}

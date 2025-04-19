#include <iostream>
#include "Digit_Control.hpp"
#include "menu.hpp"

void digit_control() {

  long long number;
  long long original;
  int digit = 0;

  std::cout << "Enter a number: ";
  std::cin >> original;

  number = original;

  if (number == 0) {
    std::cout << "The number is: " << 1 << " digit" << std::endl;
    return menu();
  }

  while (number != 0) {
    number = number / 10;
    digit++;
  }

  std::cout << "The number is: " << original << std::endl;
  std::cout << "Digit: " << digit << std::endl;

  return menu();

}

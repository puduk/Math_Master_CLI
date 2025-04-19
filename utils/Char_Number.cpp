#include <iostream>
#include "Char_Number.hpp"
#include "menu.hpp"

void char_number() {
  char input;
  std::cout << "Enter a letter we will convert it to number: ";
  std::cin >> input;

  std::cout << +input << std::endl;
  return menu();
}



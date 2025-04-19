#include <iostream>
#include "Number_Comparing.hpp"
#include "menu.hpp"

void number_comparing(){

  double first;
  double second;
  std::cout << "Enter the first number: ";
  std::cin >> first;
  std::cout << "Enter the second number: ";
  std::cin >> second;

  if (first > second) {
    std::cout << first << " is greater than " << second << std::endl;
    return menu();
  }else {
    std::cout << second << " is greater than " << first << std::endl;
    return menu();
  }


}

#include <iostream>
#include <cmath>
#include "menu.hpp"

void square_root(){

  int number;
  std::cout << "Enter the number for the square root: ";
  std::cin >> number;

  double result = sqrt(static_cast<double>(number));

  std::cout << "The square root of " << number << " is: " << result << std::endl;
  return menu();


}
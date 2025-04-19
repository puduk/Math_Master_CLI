#include <iostream>
#include "menu.hpp"

void rectangle() {
  double base;
  double height;

  std::cout << "Enter the base of the rectangle" << std::endl;
  std::cin >> base;
  std::cout << "Enter the length of the rectangle" << std::endl;
  std::cin >> height;

  double result = base * height;

  std::cout << "The area of the rectangle is: " << result << std::endl;
  return menu();








}
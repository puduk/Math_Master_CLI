#include <iostream>
#include "Triangle.hpp"
#include "menu.hpp"

void triangle(){

  double divider = 2;
  double base;
  double height;

  std::cout << "Enter the base of the triangle" << std::endl;
  std::cin >> base;
  std::cout << "Enter the height of the triangle" << std::endl;
  std::cin >> height;

  double result = (base * height) / divider  ;

  std::cout << "The area of the triangle is: " << result << std::endl;
  return menu();


}

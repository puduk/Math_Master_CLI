#include <iostream>
#include <cmath>
#include "menu.hpp"

void circle(){

  constexpr double pi = 3.1415;
  double radius;

  std::cout << "Enter the radius of the circle: " << std::endl;
  std::cin >> radius;

  double result = pi * pow(radius, 2);

  std::cout << "The area of the circle is: " << result << std::endl;
  return menu();
}
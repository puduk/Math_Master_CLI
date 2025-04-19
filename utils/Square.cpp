#include <iostream>
#include <cmath>
#include "menu.hpp"

void square(){

  double edge;

  std::cout << "Enter the edge of the square: ";
  std::cin >> edge;

  double result = pow(edge, 2);

  std::cout << "The area of the square is: " << result << std::endl;
  return menu();





}
#include <iostream>
#include "Exponentiation.hpp"
#include <cmath>
#include "menu.hpp"

void exponentiation(){

  int base;
  int above;

  std::cout << "Enter the base number: " << std::endl;
  std::cin >> base;
  std::cout << "Enter the above number: " << std::endl;
  std::cin >> above;

  int result = pow(base, above);

  std::cout << "The " << above <<" power of " << base << " is: " << result << std::endl;
  return menu();

}


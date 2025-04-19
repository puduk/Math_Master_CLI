#include <iostream>
#include "Perfect_Number.hpp"
#include "menu.hpp"

void perfect_number(){

  int number;
  int calculated = 0;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if(number == 0){
    std::cout << "0 can not be divided by any number" << std::endl;
    return menu();
  }
  if(number < 0){
    std::cout << "Negative number cannot be perfect number" << std::endl;
    return menu();
  }

  for (int i = 1; i < number; i++){
    if(number % i == 0){
      calculated += i;
    }
  }

  if(calculated == number){
    std::cout << "The number " << number << " is a perfect number" << std::endl;
    return menu();
  }

  std::cout << "The number " << number << " is not a perfect number" << std::endl;
  return menu();
}


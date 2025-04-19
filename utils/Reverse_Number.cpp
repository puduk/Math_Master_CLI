#include <iostream>
#include "menu.hpp"

void ReverseNumber(){

  int original;
  int number;
  int reverse = 0;
  int digit;
  std::cout << "Enter a number: ";
  std::cin >> original;

  if(original == 0){
    std::cout << "Reverse: " << 0 << std::endl;
    return menu();
  }
  if(original < 0){
    std::cout << "Currently we can not check reverse of negative numbers." << std::endl;
    return menu();
  }

  number = original;

  while (number != 0){

    digit = number % 10;
    reverse = (reverse * 10) + digit;
    number = number / 10;
  }
  std::cout << "Reverse: " << reverse << std::endl;
  return menu();
}


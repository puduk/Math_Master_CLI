#include <iostream>
#include "menu.hpp"

void palindrome(){

  int original;
  int reverse = 0;
  int number;
  int digit;


  std::cout << "Enter a number for palindrome control: " << std::endl;
  std::cin >> original;

  number = original;

  if(number == 0){
    std::cout << "0 is Palindrome." << std::endl;
    return menu();
  }

  while(number != 0){

    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
  }

  if(reverse == original){
    std::cout << original <<" is Palindrome." << std::endl;
    return menu();
  }
  std::cout << original << " is not Palindrome." << std::endl;
  return menu();
}

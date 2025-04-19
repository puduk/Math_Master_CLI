#include <iostream>
#include "Factorial.hpp"
#include "menu.hpp"


void factorial(){

  int number;
  int result = 1;
  std::cout<<"Enter the number: ";
  std::cin>>number;

  if(number == 0){
    std::cout<<"Factorial of "  << number << " is: " << 1 <<std::endl;
    return menu();
  }
  if(number < 0){
    std::cout << "Negative numbers does not have factorial" << std::endl;
    return menu();
  }

  for (int i = 1; i <= number; i++){
    result *= i;
  }
  std::cout << "Factorial of " << number << " is: " << result << std::endl;
  return menu();
}
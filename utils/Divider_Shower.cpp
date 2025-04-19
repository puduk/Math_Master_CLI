#include <iostream>
#include "Divider_Shower.hpp"
#include "menu.hpp"


void divider_shower(){

  int number;
  std::cout << "Enter a number: " <<std::endl;
  std::cin >> number;

  if(number == 0) {
    std::cout << "0 can not be divided by any number";
    return menu();
  }

  std::cout << "Divisors of " << number << " are: " <<std::endl;
  for (int i = 1; i <= number; i++){
    if(number % i == 0){
      std::cout << i << std::endl;
    }
  }
  return menu();
}

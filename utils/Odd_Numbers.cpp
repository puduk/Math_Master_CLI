#include <iostream>
#include "Odd_Numbers.hpp"
#include "menu.hpp"

void odd_numbers(){
  int number;
  std::cout << "Enter a number and we will show you the all odd numbers until that number:" << std::endl;
  std::cin >> number;

  for(int i = 0; i <= number; i++){
    if(i % 2 != 0){
      std::cout << i << " , ";
    }
  }

  return menu();


}


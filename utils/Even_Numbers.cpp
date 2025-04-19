#include "Even_Numbers.hpp"
#include <iostream>
#include "menu.hpp"

void even_numbers(){

  int number;
  std::cout << "Enter a number and we will show you the all even numbers until that number:";
  std::cin >> number;

  for(int i = 0; i <= number; i++){
    if(i % 2 == 0){
      std::cout << i << " , ";
    }
  }
  return menu();


}
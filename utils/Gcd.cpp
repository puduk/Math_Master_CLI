#include <iostream>
#include "Gcd.hpp"
#include "menu.hpp"


void gcd_number(){

  int first;
  int second;
  std::cout << "Enter the first number: ";
  std::cin >> first;
  std::cout << "Enter the second number: ";
  std::cin >> second;

  int smaller;
  int bigger;
  if (first > second) {
    smaller = first;
    bigger = second;
  }else {
    smaller = second;
    bigger = first;
  }



  if(bigger == smaller + 1 ){
    std::cout << "The GCD of the number " << first << " and " << second << " is: " << 1 << std::endl;
    return menu();
  }
  if(first == second){
    std::cout << "The GCD of the number " << first << " and " << second << " is: " << second << std::endl;
    return menu();
  }

  for (int i = smaller ; i > 1; i--){
    if(first % i == 0){
      if(second % i == 0){
        std::cout << "The GCD of the number " << first << " and " << second << " is: " << i << std::endl;
        return menu();
      }
    }
  }
  std::cout << "The GCD of the number " << first << " and " << second << " is: " << 1 << std::endl;
  return menu();

}


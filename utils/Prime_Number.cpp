#include <iostream>
#include "Prime_Number.hpp"
#include "menu.hpp"

void prime_number(){
  int number;
  std::cout << "Enter the number for checking prime:" << std::endl;
  std::cin >> number;
  bool isPrime = true;

  for(int i = 2; i < number; i++){
    if(number % i == 0){
      std::cout << "This is not prime number:" << number << std::endl;
      std::cout << "It can be divided by " << i << std::endl;
      isPrime = false;
      return menu();
    }
  };

  if(isPrime) {
    std::cout << "This is prime number:" << number << std::endl;
    return menu();

  }




}

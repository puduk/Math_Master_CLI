#include <iostream>
#include <iomanip>
#include "menu.hpp"

void calculator(){

  double first;
  double second;
  char operation;

  std::cout << "Please enter the first number:" << std::endl;
  std::cin >> first;
  std::cout << "Please enter the operation:" << std::endl;
  std::cin >> operation;
  std::cout << "Please enter the second number:" << std::endl;
  std::cin >> second;


  switch (operation){
    case '+':
      std::cout << "The result is: " << first + second << std::endl;
      break;;
    case '-':
      std::cout << "The result is: " << first - second << std::endl;
      break;
    case '*':
      std::cout << "The result is: " << first * second << std::endl;
      break;
    case '/':
      std::cout << std::fixed << std::setprecision(1) << "The result is: " << first / second << std::endl;
      break;
    default:
      std::cout << "Invalid operation" << std::endl;

  }

  return menu();



}
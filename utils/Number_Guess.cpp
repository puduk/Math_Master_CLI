#include <iostream>
#include "Number_Guess.hpp"
#include <cstdlib>
#include "menu.hpp"


void number_guess(){

  srand(time(nullptr));
  int number = rand() % 100;

  int guess ;

  std::cout << "Guess the number(1-100):" << std::endl;
  std::cin >> guess;

  while(guess != number) {
      if(guess < number){
        std::cout << "Your guess is less than number" << std::endl;
        std::cin >> guess;
      }
      if(guess > number){
        std::cout << "Your guess is bigger than number" << std::endl;
        std::cin >> guess;
      }
      if(guess == number){
        std::cout << "Congurulations!!!" << std::endl;
        std::cout << "You guessed correctly!" << std::endl;
        return menu();
    }
  }
}

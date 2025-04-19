#include <iostream>
#include "Rock_Paper_Scissors.hpp"
#include "menu.hpp"

void rock_paper_scissors(){

  std::string move;
  srand(time(nullptr));
  int number = rand() % 3 + 1;


  switch(number){
    case 1:
      move = "Rock";
      break;
    case 2:
      move = "Paper";
      break;
    case 3:
      move = "Scissors";
      break;
  }

  int choice ;
  std::cout << "1 for Rock" << std::endl;
  std::cout << "2 for Paper" << std::endl;
  std::cout << "3 for Scissors" << std::endl;
  std::cout << "--------------" << std::endl;
  std::cin >> choice;

  switch(choice){
    case 1:
      if(number == 3){
        std::cout << "You won: " <<  std::endl;
        std::cout << "Your choice: Rock" << std::endl;
        std::cout << "Computer choice: Scissors"  << std::endl;
        return menu();
      }
      if(number == 2){
        std::cout << "You Lost: " <<  std::endl;
        std::cout << "Your choice: Rock"  << std::endl;
        std::cout << "Computer choice: Paper" << std::endl;
        return menu();
      }
      if(number == 1){
        std::cout << "Draw: " <<  std::endl;
        std::cout << "Your choice: Rock"  << std::endl;
        std::cout << "Computer choice: Rock" << std::endl;
        return menu();
      }
      break;
    case 2:
      if(number == 1){
        std::cout << "You won: " <<  std::endl;
        std::cout << "Your choice: Paper"  << std::endl;
        std::cout << "Computer choice: Rock" << std::endl;
        return menu();
      }
      if(number == 2){
        std::cout << "Draw: " <<  std::endl;
        std::cout << "Your choice: Paper"  << std::endl;
        std::cout << "Computer choice: Paper" << std::endl;
        return menu();
      }
      if(number == 3){
        std::cout << "You Lost: " <<  std::endl;
        std::cout << "Your choice: Paper"  << std::endl;
        std::cout << "Computer choice: Scissors" << std::endl;
        return menu();
      }
      break;
    case 3:
      if(number == 1){
        std::cout << "You Lost: " <<  std::endl;
        std::cout << "Your choice: Scissors"  << std::endl;
        std::cout << "Computer choice: Rock" << std::endl;
        return menu();
      }
      if(number == 2){
        std::cout << "You won: " <<  std::endl;
        std::cout << "Your choice: Scissors"  << std::endl;
        std::cout << "Computer choice: Paper" << std::endl;
        return menu();
      }
      if(number == 3){
        std::cout << "Draw: " <<  std::endl;
        std::cout << "Your choice: Scissors"  << std::endl;
        std::cout << "Computer choice: Scissors" << std::endl;
        return menu();
      }
      break;
    default:
      std::cout << "Invalid choice" << std::endl;

  }

}



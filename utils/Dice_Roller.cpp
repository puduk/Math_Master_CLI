#include <iostream>
#include "Dice_Roller.hpp"
#include <cstdlib>
#include "menu.hpp"

void dice_roller(){

  srand(time(nullptr));
  int dice_1 = rand() % 6 + 1;
  int dice_2 = rand() % 6 + 1;

  std::cout << "------------" << std::endl;
  std::cout << "Dice rolling" <<  std::endl;
  std::cout << dice_1 << " , " << dice_2 <<std::endl;
  return menu();

}

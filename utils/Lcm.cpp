#include <iostream>
#include "Lcm.hpp"
#include "menu.hpp"

void lcm_number() {
  int first;
  int second;

  std::cout << "Enter first number: ";
  std::cin >> first;
  std::cout << "Enter second number: ";
  std::cin >> second;

  int smaller;
  int bigger;

  if (first > second) {
    bigger = first;
    smaller = second;
  }else {
    bigger = second;
    smaller = first;
  }


  if(bigger == smaller + 1 ) {
    std::cout << "The LCM of the number " << first << " and " << second << " is: " << first*second << std::endl;
    return menu();
  }


  for (int i = bigger; i <= bigger*smaller; i++) {
    if (i % bigger == 0) {
      if (i % smaller == 0) {
        std::cout << "LCM of the number " << first << " and " << second << " is: " << i << std::endl;
        return menu();
      }
    }
  }

  std::cout << "The LCM of the number " << first << " and " << second << " is: " << 1 << std::endl;
  return menu();



}


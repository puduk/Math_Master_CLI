#include <iostream>
#include "menu.hpp"

void roman_numeral(){


  std::string n_1000 = "M";
  std::string n_900 = "CM";
  std::string n_500 = "D";
  std::string n_400 = "CD";
  std::string n_100 = "C";
  std::string n_90 = "XC";
  std::string n_50 = "L";
  std::string n_40 = "XL";
  std::string n_10 = "X";
  std::string n_9 = "IX";
  std::string n_5 = "V";
  std::string n_4 = "IV";
  std::string n_1 = "I";

  int m = 0;
  int cm = 0;
  int d = 0;
  int cd = 0;
  int c = 0;
  int xc = 0;
  int l = 0;
  int xl = 0;
  int x = 0;
  int ix = 0;
  int v = 0;
  int iv = 0;
  int _i = 0;

  std::string roman_number = "";


  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if(number > 4000 || number < 0){
    std::cout << "Invalid input" << std::endl;
    std::cout << "The number should be between 1 and 4000" << std::endl;
    return;
  }


  while(number != 0){
    while(number >= 1000){
      m = number / 1000;
      number = number % 1000;
    }
    while(number >= 900){
      cm = number / 900;
      number = number % 900;
    }
    while(number >= 500){
      d = number / 500;
      number = number % 500;
    }
    while(number >= 400){
      cd = number / 400;
      number = number % 400;
    }
    while(number >= 100){
      c = number / 100;
      number = number % 100;
    }
    while(number >= 90){
      xc = number / 90;
      number = number % 90;
    }
    while(number >= 50){
      l = number / 50;
      number = number % 50;
    }
    while(number >= 40){
      xl = number / 40;
      number = number % 40;
    }
    while(number >= 10){
      x = number / 10;
      number = number % 10;
    }
    while(number >= 9){
      ix = number / 9;
      number = number % 9;
    }
    while(number >= 5){
      v = number / 5;
      number = number % 5;
    }
    while(number >= 4){
      iv = number / 4;
      number = number % 4;
    }
    while(number >= 1){
      _i = number / 1;
      number = number % 1;
    }
  }

  for(int i = 0 ; i < m; i++){
    roman_number +=  n_1000;
  }
  for(int i = 0 ; i < cm; i++){
    roman_number += n_900;
  }
  for(int i = 0 ; i < d; i++){
    roman_number += n_500;
  }
  for(int i = 0 ; i < cd; i++){
    roman_number += n_400;
  }
  for(int i = 0 ; i < c; i++){
    roman_number += n_100;
  }
  for(int i = 0 ; i < xc; i++){
    roman_number += n_90;
  }
  for(int i = 0 ; i < l; i++){
    roman_number += n_50;
  }
  for(int i = 0 ; i < xl; i++){
    roman_number += n_40;
  }
  for(int i = 0 ; i < x; i++){
    roman_number += n_10;
  }
  for(int i = 0 ; i < ix; i++){
    roman_number += n_9;
  }
  for(int i = 0 ; i < v; i++){
    roman_number += n_5;
  }
  for(int i = 0 ; i < iv; i++){
    roman_number += n_4;
  }
  for(int i = 0 ; i < _i; i++){
    roman_number += n_1;
  }

  std::cout << "Roman number is: " << roman_number << std::endl;
  return menu();

}




















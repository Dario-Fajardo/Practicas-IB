/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Dario Fajardo alu0101564630@ull.edu.es
 * @date 30 oct 2022
 * @brief show how the different arithmetic and comparison operators work.
 **/

#include <iostream>

int main() {
  // Values for every variable
  std::cout << "Introduce two integer numbers: " << std::endl;
  int first_integer, second_integer;
  std::cin >> first_integer >> second_integer;
  std::cout << "Now give two decimal numbers: " << std::endl;
  double first_double, second_double;
  std::cin >> first_double >> second_double;
  std::cout << "\n";
  
  // Operating with integers
  std::cout << "Integers: " << std::endl;
  std::cout << "----------" << std::endl;
  std::cout << first_integer << " + " << second_integer << " = " 
  << first_integer + second_integer << std::endl;
  std::cout << first_integer << " - " << second_integer << " = " 
  << first_integer - second_integer << std::endl;
  std::cout << first_integer << " * " << second_integer << " = " 
  << first_integer * second_integer << std::endl;
  if (first_integer < second_integer) {
    int replacer;
    replacer = first_integer;
    first_integer = second_integer;
    second_integer = replacer;
  }
  std::cout << first_integer << " / " << second_integer << " = " 
  << first_integer / second_integer << std::endl;
  std::cout << first_integer << " % " << second_integer << " = " 
  << first_integer % second_integer << std::endl;
  if (first_integer == second_integer) {
    std::cout << first_integer << " = " << second_integer << std::endl << std::endl;
  } else if(first_integer > second_integer) {
    std::cout << first_integer << " > " << second_integer << std::endl;
    std::cout << second_integer << " < " << first_integer << std::endl << std::endl;
  } 
  // Operating with decimals
  std::cout << "Decimal numbers: " << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << first_double << " + " << second_double << " = " 
  << first_double + second_double << std::endl;
  std::cout << first_double << " - " << second_double << " = " 
  << first_double - second_double << std::endl;
  std::cout << first_double << " * " << second_double << " = " 
  << first_double * second_double << std::endl;
  std::cout << first_double << " / " << second_double << " = " 
  << first_double / second_double << std::endl;
  if (first_double < second_double) {
    int replacer;
    replacer = first_double;
    first_double = second_double;
    second_double = replacer;
  }
  if (first_double == second_double) {
    std::cout << first_double << " = " << second_double << std::endl;
  } else if(first_double > second_double) {
    std::cout << first_double << " > " << second_double << std::endl;
    std::cout << second_double << " < " << first_double << std::endl;
  }   

}

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division.cc
  * @author  Dario Fajardo alu0101564630@ull.edu.es
  * @date Oct 20 2022
  * @brief this program divides two integer numbers and gives the result and the remainder
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107_en
  */

#include <iostream>

int main(){
  int dividend;
  int divider;

  std::cin >> dividend;
  std::cin >> divider;
  
  int result{dividend/divider};
  int remainder{dividend%divider};

  std::cout << result;
  std::cout << " ";
  std::cout << remainder << std::endl;

  return 0;
}

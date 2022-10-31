/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Dario Fajardo alu0101564630@ull.edu.es
 * @date oct 31 2022
 * @brief reads a sequence of numbers and prints their average.
 * @see https://jutge.org/problems/P78142_en
 */

#include <iostream>

int main() {
  double number;
  double new_number;
  int number_of_elements{1};
  double average;
  std::cin >> number;
  while(std::cin >> new_number) {
    ++number_of_elements;
    average = (number + new_number) / number_of_elements
  }
  std::cout << average << std::endl;
  return 0;
}

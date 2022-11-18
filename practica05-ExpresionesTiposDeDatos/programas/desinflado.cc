/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Dario Fajardo alu0101564630@ull.edu.es
 * @date 30 oct 2022
 * @brief This program converts any uppercase in lowercase.
 */

#include <iostream>

int main() {
  char uppercase_letter;
  std::cin >> uppercase_letter;
  std::cout << static_cast<char>(static_cast<int>(uppercase_letter) + 32) << std::endl;
}

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @autho Dario Fajardo alu0101564630@ull.edu.es
 * @date 30 oct 2022
 * @brief truth table for logic operators
**/

#include <iostream>

int main() {
  std::cout << "p    !p" << std::endl;
  std::cout << "-------" << std::endl;
  std::cout << true << "    " << false << std::endl;
  std::cout << false << "    " << true << std::endl << std::endl;

  std::cout << "p    q    p && q    p || q" << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << false << "    " << false << "    " << (false && false) << "         " 
  << (false || false) << std::endl;
  std::cout << false << "    " << true << "    " << (false && true) << "         " 
  << (false || true) << std::endl;
  std::cout << true << "    " << false << "    " << (true && false) << "         " 
  << (true || false) << std::endl;
  std::cout << true << "    " << true << "    " << (true && true) << "         " 
  << (true || true) << std::endl;
}

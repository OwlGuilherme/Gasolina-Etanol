#include "funcs.hpp"
#include <iostream>

void run() {
  while(true){
    showMenu();
  }
}

void showMenu() {
  double gas = 0;
  double etan = 0;
  
  std::cout << "+-----------------------------------------+" << '\n';
  std::cout << "|            Gasolina ou Etanol           |" << '\n';
  std::cout << "|-----------------------------------------|" << '\n';
  std::cout << "| Atingindo até 73% do valor da gasolina, |" << '\n';
  std::cout << "| compensar utilizar o etanol.            |" << '\n';
  std::cout << "+-----------------------------------------+" << '\n';
  std::cout << "Digite o valor da gasolina: R$ " << '\n';  
  std::cout << "> ";
  
  std::cin >> gas;
}

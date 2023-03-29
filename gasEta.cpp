#include "funcs.hpp"
#include <iostream>

extern "C" double calcPorcen(double, double);

double gas = 0;
double ethan = 0;
double result;

void run() {
  while(true){  
    showMenu();
    if( calcBest() ){
      std::cout << "É melhor utilizar ETANOL" << '\n';
      std::cout << "O etanol representa " << result << "% do valor da gasolina" << '\n'; 
    } else {
      std::cout << "É melhor utilizar GASOLINA" << '\n';
      std::cout << "O etanol representa " << result << "% do valor da gasolina" << '\n';
    }
    break;
  }
}

bool calcBest() {
  result = calcPorcen(gas, ethan);
  if( result >= 73 ){
    return true;
  } else {
    return false;
  }
}

void showMenu() {  
  std::cout << "+-----------------------------------------+" << '\n';
  std::cout << "|            Gasolina ou Etanol           |" << '\n';
  std::cout << "|-----------------------------------------|" << '\n';
  std::cout << "| Atingindo até 73% do valor da gasolina, |" << '\n';
  std::cout << "| compensar utilizar o etanol.            |" << '\n';
  std::cout << "+-----------------------------------------+" << '\n';
  std::cout << "Digite o valor da gasolina: R$ " << '\n';  
  std::cout << "> ";
  std::cin >> gas;
  std::cout << "Digite o valor do etanol: R$ " << '\n';
  std::cin >> ethan;
}

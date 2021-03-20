#include <iostream>

#define variavel 90
void funcao(){
	std::cout << "Esse é o cout de diretivas" << '\n';
}

#include "13.1-Lib.h"

int main(){
	std::cout << "Esse é o valor de variavel: " << variavel << '\n';
	funcao();
	return 0;
}
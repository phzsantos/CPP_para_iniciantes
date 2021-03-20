#include <iostream>
#include "13.1-Lib.h"

#ifndef variavel
#define variavel 90
void funcao(){
	std::cout << "Esse é o cout de diretivas" << '\n';
}
#endif


int main(){
	std::cout << "Esse é o valor de variavel: " << variavel << '\n';
	funcao();
	return 0;
}
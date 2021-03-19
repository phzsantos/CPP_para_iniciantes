#include <iostream>


int main(){

	// While
	int numero = {1};

	while (numero <= 10){
		std::cout << "Esse número é o " << numero << '\n';
		numero++; // incrementa, equivale a: numero = numero + 1; ou seja adiciona 1.
	}

	

	// Do while
	numero = {1};

	do {
		std::cout << "Esse número é o " << numero << '\n';
		numero++;
	}while (numero <= 20);

	return 0;
}
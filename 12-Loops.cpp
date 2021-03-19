#include <iostream>


int main(){
	int numero = {1};

	while (numero <= 10){
		std::cout << "Esse número é o " << numero << '\n';
		numero++; // incrementa, equivale a: numero = numero + 1; ou seja adiciona 1.
	}

	return 0;
}
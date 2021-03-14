#include <iostream>


int main(){
	double pi = 3.14;
	int numero = 3;
	double novo = 45;

	std::cout << "Este é valor de pi: " << pi << '\n';
	std::cout << "Este é valor de numero: " << numero << '\n';
	std::cout << "Este é valor de novo: " << novo << '\n';

	// Conversão implicita
	numero = novo; // Implicita porque você não indica nada, apenas declara.

	std::cout << "\nEste é valor de pi: " << pi << '\n';
	std::cout << "Este é valor de numero: " << numero << '\n';
	std::cout << "Este é valor de novo: " << novo << '\n';
	return 0;
}
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

	// Conversão explicita
	pi = int(pi); // Explicita porque você está indicando explicitamente para qual tipo quer converter.

	numero = static_cast<double>(pi); // Outra forma explicita

	std::cout << "\nEste é valor de pi: " << pi << '\n';
	std::cout << "Este é valor de numero: " << numero << '\n';
	std::cout << "Este é valor de novo: " << novo << '\n';
	return 0;
}
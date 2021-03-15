#include <iostream>

int main(){
	int numeros[5] = {0, 11, 22, 33, 44}; //Aqui ou você coloca a quantidade certa do array ou coloca vazio
	std::cout << "este é valor da posição do meu array: " << numeros << '\n';
	// Isso vai gerar um alfa numerico pois um array é um ponteiro.

	std::cout << "este é valor da posição do meu array: " << numeros[1] << '\n';
	// Aqui estamos puxando o valor numero 1 do array

	numeros[1] = 1;
	// Também podemos mudar o valor de uma posição do array declarando.

	std::cout << "este é valor da posição do meu array: " << numeros[1] << '\n';

	std::cout << "este é valor da posição do meu array: " << numeros[1] + 10 << '\n';
	// Podemos também somar o numero do Array mais algo

	std::cout << "este é valor da posição do meu array: " << numeros[1 + 1] << '\n';
	// Podemos andar com a posição do array desse jeito. 

	return 0;
}
#include <iostream>

void recebe_array(int arr[]){
	arr[3] = 44;
}



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

	int multi[3][3] = { { 0, 1, 2 } , { 0, 3, 4 } , { 0, 5, 6 } };
	// Assim que nos criamos varios arrays em 1 só , 3 arrays de 3 elementos cada 

	std::cout << "este é valor da posição do meu array: " << multi[1][1] << '\n';
	// De qual array e de qual posição



	std::cout << "este é valor da posição do meu array ANTES da função: " << numeros[3] << '\n';

	recebe_array(numeros);

	std::cout << "este é valor da posição do meu array DEPOIS da função: " << numeros[3] << '\n';


	return 0;
}
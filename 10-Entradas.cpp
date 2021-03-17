#include <iostream>

int main(){
	
	std::string texto;

	//const int total {99};
	//char letra[ total ];
	std::cout << "Digite um texto: ";

	//std::cin >> letra; caso você use a variavel com array e deixe o std::cin assim, ele vai pegar tudo ate o primeiro espaço.
	// Por exemplo se você desse um input de paulo henrique, ele só consideraria paulo

	//std::cin.getline( letra, total);
	// Essa é a forma certa dele usando array, pois aqui ele considera ate os espaços.

	std::getline( std::cin , texto);
	// Essa é a forma de pegar um input inteiro no formato de string. 

	std::cout << "A texto que você digitou foi: " << texto << '\n';
	return 0; 
}
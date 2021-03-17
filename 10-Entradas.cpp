#include <iostream>

int main(){
	const int total {99};
	char letra[ total ];
	std::cout << "Digite uma letra: ";

	//std::cin >> letra; caso você use a variavel com array e deixe o std::cin assim, ele vai pegar tudo ate o primeiro espaço.
	// Por exemplo se você desse um input de paulo henrique, ele só consideraria paulo

	std::cin.getline( letra, total);
	// Essa é a forma certa dele usando array, pois aqui ele considera ate os espaços.

	std::cout << "A letra que você digitou foi: " << letra << '\n'; 
}
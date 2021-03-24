#include <iostream>

int main(int argc, char const ** argv){
	std::string * ponteiro = nullptr;
	ponteiro = new std::string[8];

	std::cout << "Escreva algo: ";
	std::getline( std::cin, (*ponteiro));
	std::cout << "Você digitou: " << *ponteiro << '\n';
	delete[] ponteiro;
	ponteiro = NULL;
	return 0;
}
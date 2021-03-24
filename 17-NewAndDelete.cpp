#include <iostream>

int main(int argc, char const ** argv){
	std::string * ponteiro = nullptr;
	ponteiro = new std::string[8];

	std::cout << "Escreva algo: ";
	std::getline( std::cin, (*ponteiro));
	std::cout << "Você digitou: \e[34;4m" << *ponteiro << "\e[m" << '\n';
	delete[] ponteiro;
	ponteiro = NULL;
	return 0;
}
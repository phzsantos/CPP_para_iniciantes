#include <iostream>

enum Cores {
	vermelho,
	azul,
	preto
};

int main(int argc, char const ** argv){
	Cores cores;
	std::cout << "O numero da cor vermelha é: " << vermelho << '\n';
	std::cout << "O numero da cor azul é: " << azul << '\n';
	std::cout << "O numero da cor preta é: " << preto << '\n';
	return 0;
}
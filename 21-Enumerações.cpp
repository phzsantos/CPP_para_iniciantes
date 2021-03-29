#include <iostream>

enum Cores {
	vermelho,
	azul,
	preto
};

enum Cores2 {
	branco,
	verde = 50,
	marrom
};

int main(int argc, char const ** argv){
	Cores cores;
	Cores2 cores2;
	std::cout << "O numero da cor vermelha é: " << vermelho << '\n';
	std::cout << "O numero da cor azul é: " << azul << '\n';
	std::cout << "O numero da cor preta é: " << preto << '\n';
	std::cout << '\n' << "O numero da cor branca é: " << branco << '\n';
	std::cout << "O numero da cor verde é: " << verde << '\n';
	std::cout << "O numero da cor marrom é: " << marrom << '\n';
	return 0;
}
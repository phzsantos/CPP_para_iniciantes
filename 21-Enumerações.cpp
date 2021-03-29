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

enum Cores3 {
	laranja,
	amarelo,
	roxo = 60
};

enum Saidas {
	sucesso,
	erro_de_compilação,
	erro_de_usuário
};

int main(int argc, char const ** argv){
	Cores cores;
	Cores2 cores2;
	Cores3 cores3;
	Saidas saidas;
	std::cout << "O numero da cor vermelha é: " << vermelho << '\n';
	std::cout << "O numero da cor azul é: " << azul << '\n';
	std::cout << "O numero da cor preta é: " << preto << '\n';
	std::cout << '\n' << "O numero da cor branca é: " << branco << '\n';
	std::cout << "O numero da cor verde é: " << verde << '\n';
	std::cout << "O numero da cor marrom é: " << marrom << '\n';
	std::cout << '\n' << "O numero da cor laranja é: " << laranja << '\n';
	std::cout << "O numero da cor amarela é: " << amarelo << '\n';
	std::cout << "O numero da cor roxa é: " << roxo << '\n';
	return sucesso;
}
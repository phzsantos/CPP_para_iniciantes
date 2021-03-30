#include <iostream>
#include <fstream>

int main(int argc, char const ** argv ){

	std::string conteudo, outro;
	std::ofstream arquivo;

	arquivo.open("22.2-Arquivo.txt", std::ios_base::app );

	std::cout << "Escreva algo para adicionar no arquivo: ";
	std::getline( std::cin, conteudo);
	std::cout << "Escreva mais alguma coisa para adicionar no arquivo: ";
	std::getline( std::cin, outro);

	arquivo << conteudo << '\n';
	arquivo << outro << '\n';

	arquivo.close();

	std::cout << "Dados gravados!!!" << '\n';
	return 0;
}
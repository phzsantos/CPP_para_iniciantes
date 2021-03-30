#include <iostream>
#include <fstream>


int main(int argc, char const ** argv ){
	std::string linha;

	std::ifstream arquivo("22.2-Arquivo.txt");

	if( arquivo.is_open() ){
		while( getline( arquivo, linha ) ){
			std::cout << linha << '\n';
		}

		arquivo.close();

	}else{
		std::cout << "Não foi possivel abrir o arquivo" << '\n';
	}

	return 0;
}
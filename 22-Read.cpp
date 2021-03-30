#include <iostream>
#include <fstream>


int main(int argc, char const ** argv ){
	std::string linha;
	bool numero {false};
	std::string parametro;
	int i = {1};

	if( argc > 1){
		parametro = argv [1];
		if( parametro == "--numero" || parametro == "-n" ){
			numero = true;
		}
	}


	std::ifstream arquivo("22.2-Arquivo.txt");

	if( arquivo.is_open() ){
		while( getline( arquivo, linha ) ){
			if( numero ){
				std::cout << i << " \u2502 " << linha << '\n';
				i++;
			}else{
				std::cout << linha << '\n';
			}
		}

		arquivo.close();

	}else{
		std::cout << "Não foi possivel abrir o arquivo" << '\n';
	}

	return 0;
}
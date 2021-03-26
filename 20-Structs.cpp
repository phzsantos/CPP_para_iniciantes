#include <iostream>

struct clientes {
	std::string NOME;
	std::string SOBRENOME;
	int MATRICULA;
};

void mostrar_dados( struct clientes c){
	std::cout << ":::: DADOS DO CLIENTE ::::" << '\n';
	std::cout << c.NOME << " " << c.SOBRENOME << " - " << c.MATRICULA << '\n';
}

struct clientes pegar_dados(){
	struct clientes c;
	std::cout << "Informe o nome do cliente: ";
	std::getline( std::cin, c.NOME);
	std::cout << "Informe o nome do cliente: ";
	std::getline( std::cin, c.SOBRENOME);
	std::cout << "Informe a matricula do cliente: ";
	std::cin >> c.MATRICULA;
	return c;
};

int	main(int argc, char const ** argv){
	std::cout << ":::: CADASTRO DO CLIENTE ::::" << '\n';
	struct clientes dados_cliente;
	dados_cliente = pegar_dados();
	mostrar_dados( dados_cliente );
	return 0;
}
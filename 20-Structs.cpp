#include <iostream>

typedef struct clientes {
	std::string NOME;
	std::string SOBRENOME;
	int MATRICULA;
} t_clientes;

void mostrar_dados( t_clientes c){
	std::cout << ":::: DADOS DO CLIENTE ::::" << '\n';
	std::cout << c.NOME << " " << c.SOBRENOME << " - " << c.MATRICULA << '\n';
}

t_clientes pegar_dados(){
	t_clientes c;
	std::cout << "Informe o nome do cliente: ";
	std::getline( std::cin, c.NOME);
	std::cout << "Informe o sobrenome do cliente: ";
	std::getline( std::cin, c.SOBRENOME);
	std::cout << "Informe a matricula do cliente: ";
	std::cin >> c.MATRICULA;
	return c;
};

int	main(int argc, char const ** argv){
	std::cout << ":::: CADASTRO DO CLIENTE ::::" << '\n';
	t_clientes dados_cliente;
	dados_cliente = pegar_dados();
	mostrar_dados( dados_cliente );
	return 0;
}
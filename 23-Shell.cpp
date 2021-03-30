#include <iostream>
#include <cstdlib>

int	main(int argc, char const ** argv ){
	system("clear");
	std::string home = getenv("HOME");
	std::string shell = getenv("SHELL");

	std::cout << "O caminho da sua home é: " << home << '\n';
	std::cout << "O seu shell padrão é o: " << shell << '\n';
	std::cout << '\n' << "Isso é o que o comando ls faz:" << '\n';
	system("ls");
	return 0;
}
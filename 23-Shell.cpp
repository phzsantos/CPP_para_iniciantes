#include <iostream>
#include <cstdlib>

int	main(int argc, char const ** argv ){
	std::string home = getenv("HOME");

	std::cout << "O caminho da sua home é: " << home << '\n';
	return 0;
}
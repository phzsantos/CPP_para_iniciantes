#include <iostream>

void funcao(){
	std::cout << " Olá mundo!" << '\n';
	funcao();
}

int main(int argc, char const ** argv){
	funcao();
	return 0;
}
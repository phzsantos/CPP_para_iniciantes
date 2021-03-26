#include <iostream>

void funcao(){
	std::cout << "Bom dia grupo!" << '\n';
}
/*
int funcao( int x, int y ){
	return x * y;
}
*/
std::string funcao( std::string palavra1, std::string palavra2 ){
	std::string palavra = palavra1 + " " + palavra2;
	return palavra;
}

std::string * funcao( std::string * n1){
	return n1;
}

const int funcao( const int xy, const int yx ){
	return xy + yx;
}

int main( int argc, char const ** argv ){
	funcao();
	std::cout << funcao(1,2) << '\n';
	std::cout << funcao( "Paulo", "Henrique" ) << '\n';
	std::string nome {"Just do it"};
	std::cout << *funcao( &nome ) << '\n';
	const int nu1 {10};
	const int nu2 {5};
	std::cout << funcao( nu1, nu2 ) << '\n';
	return 0;
}
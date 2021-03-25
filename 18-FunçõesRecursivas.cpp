#include <iostream>
#include <cstdlib>

int fatorial( int numero ){
	return (numero <= 1) ? 1 : numero * fatorial( numero - 1);
}

int main(int argc, char const ** argv){
	if( argc > 1 ){
		int numero = atoi( argv[1] );
		std::cout << "Esse é o valor de fatorial de " << numero << "! " << fatorial( numero ) << '\n';
	}else{
		std::cout << "Informe um valor." << '\n';
 	}
	return 0;
}
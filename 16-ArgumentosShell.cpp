#include <iostream>


int main( int argc, char ** argv ){ 

	if( argc > 1){
		std::cout << "O primeiro parametro passado é: " << argv[1] << '\n';
	}

	else{
		std::cout << "Nenhum parametro foi passado" << '\n';
	}	
	return 0;
}
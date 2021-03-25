#include <iostream>

int fatorial( int numero ){
	if( numero == 0 || numero == 1 ){
		return 1;
	}

	else{
	return numero * fatorial(numero - 1);
	}
}
int main(int argc, char const ** argv){
	std::cout << "Esse é o valor de fatorial de 4! " << fatorial(4) << '\n';
	return 0;
}
#include <iostream>

int soma (int, int);

int main(){
	std::cout << "O valor da soma é: " << soma(3,6) << '\n';
	return 0;
}


int soma (int x, int y){
	return x + y;
}
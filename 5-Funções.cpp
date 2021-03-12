#include <iostream>

int main(){
	char caractere = {'a'};
	std::cout << "O valor do caractere é: " << caractere << '\n';
	std::cout << "O valor do caractere Maiusculo é: " << toupper( caractere) << '\n';	
 	caractere = toupper( caractere );
 	std::cout << "O valor do caractere é: " << caractere << '\n';
	return 0;
}

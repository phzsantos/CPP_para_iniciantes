#include <iostream>
#include <string>
#define hello "hello world!"

int main(){
	const std::string HELLO = "HELLO WORLD!"; 
	std::cout << "Este é o valor de hello: " << hello << '\n';
	std::cout << "Este é o valor de HELLO: " << HELLO << '\n';
	return 0;
}
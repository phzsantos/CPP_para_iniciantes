#include <iostream>
#include <vector>

int main(){
	std::vector<std::string> vet = {"Python","Javascript","SQL","C++"};
	std::vector<std::string>::iterator inicio = vet.begin();
	std::cout << "Esse é o primeiro valor " << *inicio << '\n';
	
	std::cout << "Esse é o tamanho do nosso vector " << vet.size() << '\n';

	vet.pop_back();
	std::vector<std::string>::iterator fim = vet.end();
	std::cout << "Esse é o ultimo valor " << *fim << '\n';
	
	vet.push_back("GNU/Linux");
	vet.pop_back();
	std::vector<std::string>::iterator fim2 = vet.end();
	std::cout << "Esse é o ultimo valor inserido " << *fim2 << '\n';

	return 0;
}

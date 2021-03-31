#include <iostream>

void incrementar(){
	static int value{ 1 };
	++value;
	std::cout << value << '\n';
}

int main(){
	incrementar();
	incrementar();
	incrementar();
	return 0;
}

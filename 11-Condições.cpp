#include <iostream>
using namespace std;

int main(){
	int var = {};

	cout << "Me diga um numero! ";
	cin >> (var);

	if( var == 30 ){
		cout << "O valor de var é 30" << '\n';
	}

	else if( var == 31){
		cout << "O valor de var na verdade é 31" << '\n';
	}

	else{
		cout << "var é diferente de 30 e 31, var na verdade é: " << var << '\n';
	}
	return 0;
}
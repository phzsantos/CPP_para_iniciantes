#include <iostream>
using namespace std;

int main(){
	int var = {};

	cout << "Me diga um numero! ";
	cin >> (var);


	// Condiconal (Usado para proposito geral)
	if( var == 30 ){
		cout << "O valor de var é 30" << '\n';
	}

	else if( var == 31){
		cout << "O valor de var é 31" << '\n';
	}

	else{
		cout << "var é diferente de 30 e 31, var na verdade é: " << var << '\n';
	}



	//Switch (Usado apenas para comparações exatas)
	switch( var ){
		case 30:
			cout << "O valor de var é 30!" << '\n';
			break;

		case 31:
			cout << "O valor de var é 31!" << '\n';
			break;

		default:
			cout << "Você digitou uma letra/numero que não é 30 nem 31." << '\n';
			break;
	}



	//Operador ternario (apenas if e else)
	cout << ( var > 10 ? "Var é maior que dez" : "Var é menor que dez") << '\n';


	return 0;
}
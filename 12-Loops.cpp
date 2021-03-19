#include <iostream>


int main(){
	/*
	// While
	int numero = {1};

	while (numero <= 10){
		std::cout << "Esse número é o " << numero << '\n';
		numero++; // incrementa, equivale a: numero = numero + 1; ou seja adiciona 1.
	}
	*/

	/*
	// Do while
	numero = {1};

	do {
		std::cout << "Esse número é o " << numero << '\n';
		numero++;
	}while (numero <= 20);
	*/

	/*
	// For
	for ( int i = {1}; i <= 10; i++){
		std::cout << "Esse número é o " << i << '\n';
	}



	// For com array
	std:: string cantores[] = {"Chester Bennington", "Chris Cornell", "Bruce Dickinson", "James Hatfield"};
	int numeros[] = {11, 22, 33, 44, 55};

	int total = sizeof( cantores ) / sizeof( cantores[0] ); // Deixa o tamanho do array dinamico

	for ( int i2 = 0; i2 < total; i2++){ // Declara variavel/da onde ele começa; condição; incrementa.
		std::cout << "O " << i2 << " é " << cantores[i2] << '\n';
	}



	// For dentro de For (Constroi uma piramide, não entendi muito bem.)
	for( int i = 0; i < 8; i++ ){

    	for( int k = 0; k < i + 1; k++ ){
        	std::cout << "*";
    	}

    	for( int j = 8; j > 0; j-- ){
      		std::cout << " ";
   		}

    	std::cout << '\n';

	}
	*/


	// For com auto
	std:: string cantores[] = {"Chester Bennington", "Chris Cornell", "Bruce Dickinson", "James Hatfield"};
	int numeros[] = {11, 22, 33, 44, 55};

	for ( auto i : cantores ){ // auto pega o tipo automaticamente; lê-se auto para cantores; 
		std::cout << "O " << i << " é " << i << '\n';
	}

	return 0;
}
#include "25.2-Project.h"

void _help(){
	system("clear");
	std::cout << "::::::: HELP :::::::\n"
		     "\nPara iniciar o programa:\n"
		     "use: ./a.out [--parametro] [numero]\n"
		     "\nParametros:\n"
	       	     "--dec2bin para converter decimal para binario\n"
	     	     "--bin2dec para converter binario para decimal\n";	     
}

void dec2bin( int number ){
	system("clear");
	int binary_arr[32], i = {0};

	while( number > 0 ){
		binary_arr[i] = number % 2;
		number = number / 2;
		i++;
	}

	for( int k = i - 1; k >= 0; k-- ){
		std::cout << binary_arr[k];
	}

	std::cout << '\n';
}

void bin2dec( int number ){
	system("clear");
	std::cout << "Eu sou o bin2dec " << number << '\n';
}

void _start( int argc, char ** argv ){	
	if( argc > 2){
		std::string param = argv[1];
		int number = std::stoi( argv[2] );
		if(param == "--dec2bin" || param == "-b" ){
			dec2bin( number );
		}else if( param == "--bin2dec" || param == "-d" ){
			bin2dec( number );
		}else{
			_help();
		}
	}else{
		_help();
	}
}

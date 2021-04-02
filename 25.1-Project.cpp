#include "25.2-Project.h"

void _help(){
	system("clear");
	std::cout << "::::::: HELP :::::::\n"
		     "\nPara iniciar o programa:\n"
		     "use: ./a.out [parametro] [numero]\n"
		     "\nParametros:\n"
	       	     "--dec2bin para converter decimal para binario\n"
	     	     "--bin2dec para converter binario para decimal\n";	     
}

void _start( int argc, char ** argv ){	
	_help();
}

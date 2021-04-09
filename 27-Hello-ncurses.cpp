//inclui a biblioteca
#include <ncurses.h>
#include <string>

int main( int argc, char ** argv ){
	
	std::string ola = "Olá mundo e ncurses!";
	char * hello = &ola[0];

	// inicializa ncurses
	initscr(); //init screen

	// exibe na tela os dados
	printw( hello ); // print window

	// atualiza a "janela do terminal"
	refresh();

	// capta dados do usuário
	getch(); //get char

	// desaloca espaço alocado pelo ncurses
	endwin(); //end window

	return 0;
}

// Para compilar com Ncurses
// g++ 27-Hello-ncurses.cpp -lncurses -ltinfo
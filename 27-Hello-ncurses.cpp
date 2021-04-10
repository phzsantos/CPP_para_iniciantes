//inclui a biblioteca
#include <ncurses.h>
#include <string>
#include <unistd.h>

int main( int argc, char ** argv ){
	
	std::string ola = "Olá ncurses!";
	char * hello = &ola[0];

	if( argc > 1 ){
		hello = argv[1]; // para printra tudo ./a "texto" caso não use aspas ele só mostra a 1 word
	}

	const int delay = 30000;
	int y, x;
	x = y = 0;

	// inicializa ncurses
	initscr(); //init screen

	while( 1 ){  //faz a animação da bolinha andando pelo terminal
		clear();
		mvprintw( y, x, "o");
		refresh();
		usleep(delay);
		++x;
	}

	move( 10, 50); // Define onde você vai mostrar o conteudo [vertical] [horizontal]
	
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
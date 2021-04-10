//inclui a biblioteca
#include <ncurses.h>
#include <string>
#include <unistd.h>

int main( int argc, char ** argv ){

	int altura, largura, inicio_x, inicio_y;
	altura = inicio_x = inicio_y = 10;
	largura = 80;
	
	// inicializa ncurses
	initscr(); //init screen

	noecho();
	curs_set(FALSE);

	WINDOW * window = newwin( altura, largura, inicio_x, inicio_y );
	refresh();

	box( window, 0, 0 );
	wprintw( window, "Formulario de contato" );
	wrefresh( window );

	move( 10, 50); // Define onde você vai mostrar o conteudo [vertical] [horizontal]
	
	// exibe na tela os dados
	//printw( hello ); // print window

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
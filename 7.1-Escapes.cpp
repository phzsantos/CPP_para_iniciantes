#include <iostream>
#include <string>
#define HELLO "Hello, constant!"
using namespace std;
int main(){
	const string hello = "Hello constant, again!";

	// Sem código de escapes

	cout << "Constant Macro HELLO: " << HELLO << endl;
	cout << "Constant literal hello: " << hello << endl;

	// Com com o código de escape \n
	cout << "Constant Macro HELLO: \n" << HELLO << endl;
	cout << "Constant literal hello: \n" << hello << endl;

	// Com com o código de escape \r
	cout << "Constant Macro HELLO(com \\r): \r" << HELLO << endl;
	cout << "Constant literal hello(com \\r): \r" << hello << endl;

	// Com com o código de escape \t
	cout << "Constant Macro HELLO(com \\t): \t" << HELLO << endl;
	cout << "Constant literal hello(com \\t): \t" << hello << endl;

	// Com com o código de escape \v
	cout << "Constant Macro HELLO(com \\v): \v" << HELLO << endl;
	cout << "Constant literal hello(com \\v): \v" << hello << endl;

	// Com com o código de escape \b
	cout << "Constant Macro HELLO(com \\b): \b" << HELLO << endl;
	cout << "Constant literal hello(com \\b): \b" << hello << endl;

	// Com com o código de escape \f
	cout << "Constant Macro HELLO(com \\f): \f" << HELLO << endl;
	cout << "Constant literal hello(com \\f): \f" << hello << endl;

	// Com com o código de escape \a
	cout << "Constant Macro HELLO(com \\a): \a" << HELLO << endl;
	cout << "Constant literal hello(com \\a): \a" << hello << endl;
	
	// Se atribuírmos um valor para hello ou HELLO, o código não compilará
	// Exemplo: hello = "new hello" , ou HELLO = "New Hello"
	return 0;
}
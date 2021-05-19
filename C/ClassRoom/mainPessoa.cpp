#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Pessoa {
	public:
		string nome;
};

int main(int argc, char** argv) {
	Pessoa p1;
	Pessoa p2;
	p1.nome = "Eduardo";
	p2.nome = "Alexandre";
	
	cout << p1.nome << endl;
	cout << p2.nome << endl;
	
	return 0;
}

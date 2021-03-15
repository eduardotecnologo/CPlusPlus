#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Pessoa{
	private:
		string nome;
		public:
			string getNome(){
				return nome;
			}
			void setNome(string x){
				nome = x;
			}
};

int main(int argc, char** argv) {
	Pessoa p1;
	Pessoa p2;
	p1.setNome("Eduardo");
	p2.setNome("Alexandre");
	
	cout << p1.getNome() << endl;
	cout << p2.getNome() << endl;
	
 	return 0;
}

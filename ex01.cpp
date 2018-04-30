//g++ seu_programa.cpp -o programa 
//./seu_programa

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
    class Carro{
        public:
            string marca;
            int ano;
            string cor;
    };
int main(int argc, char** argv){
    Carro c1;
    c1.marca = "Fiat";
    c1.ano = 2017;
    c1.cor = "Preto";

    Carro c2;
    c2.marca = "Palio";
    c2.ano = 2018;
    c2.cor = "Branco";
    
    cout << c1.marca << endl;
    cout << c2.marca << endl;

    return 0;
}
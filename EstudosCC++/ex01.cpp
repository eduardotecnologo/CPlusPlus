//g++ seu_programa.cpp -o programa 
//./seu_programa

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

#include "Carro.h"
int main(int argc, char** argv){
    Carro c1;
    c1.setMarca("Fiat");
    c1.setAno(2017);

    Carro c2;
    c2.setMarca("Palio");
    c2.setAno(1960);
    
    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;

    return 0;
}
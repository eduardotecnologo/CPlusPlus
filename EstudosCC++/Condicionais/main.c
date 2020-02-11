#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo vari‡veis
    int a = 8;
    float b = 2.5;
    char c = 'k';

    //**Condicional simples
    if(a == 5){
    printf("\n A variavel  a = 5");
    }else{
        printf("\n A variavel b = 2.55");
    }
    if(c == 'x'){
        printf("\n A variavel c = x");
    }else{
        printf("\n A variavel c != x");
    }

    //Numero par ou impar
    if(a % 2 == 1){
        printf("\n A variavel a e impar");
    }else{
        printf("\n A variavel e par");
    }

    return 0;
}

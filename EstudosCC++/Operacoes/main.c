#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Corrigindo erros acentuação
    //No Command Prompt execute:
    //chcp 65001
    //e o resultado é:
    //Active code page: 65001

    setlocale(LC_ALL, "Portuguese_Brasil");
    //Definido variáveis
    int a = 5, b = 3;
    int c = 6, d = 2;

    //Soma
    printf("\n A soma de %d e %d = %d",a , b, a + b);

    //Subtrair
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    //Divisão
    printf("\n A divisao de %d por %d e = %d", c, d, c / d);

    //Multiplicação
    printf("\n A multiplicacao de %d por %d e = %d", c, d, c * d);

    //Resto da divisão
    printf("\n O resto da divisao de %d e %d = %d", a, b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 e = %d", abs(-3));

    return 0;
}

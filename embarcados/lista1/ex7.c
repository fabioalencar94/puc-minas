#include <stdlib.h>
#include <stdio.h>

int main() {
    //declaracao de variaveis do tipo inteiro e atribuicao do valor 1
    int a, b, c, d = 1;

    //variavel a recebe seu proprio valor (1) - 2 = -1
    a  = -2;

    //variavel b recebendo a * a = 4
    b = a *a;

    //variavel c recebendo d (1) e variavel d sendo incrementada = 2
    c = d++;
    
    //variavel d recebendo c + 5 = 6 e c sendo incrementada = 2
    d = c++ + 5;

    //variavel d recebendo c sendo incrementado = 3 + 5 = 8
    d = ++c + 5;

    //print de a = -2, b = 4, c = 3, d = 8
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
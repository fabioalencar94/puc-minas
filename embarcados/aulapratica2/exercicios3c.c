#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int anoNasc, anoAtual, idade, idade2050;
    printf("Entre com seu ano de nascimento: ");
    scanf("%i", &anoNasc);   
    printf("Entre com o ano atual: ");
    scanf("%i15", &anoAtual);
    idade = anoAtual - anoNasc;
    printf("A sua idade é: %d\n", idade);
    idade2050 = idade + (2050 - anoAtual);
    printf("Você terá %d em 2050.\n",idade2050);
}
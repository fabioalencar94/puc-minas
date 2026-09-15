/*
Aluno: Fabio Guimaraes Alencar 
Matricula: 914866
AED1
*/

#include <stdio.h>
#include <stdbool.h>
#include "io.h"

void ex1();
void ex2();
void ex3();


int main() {

    int op;
    do {
        printf("Escolha o exercicio (1 a 10) ou 0 para sair.\n");
        scanf("%d", &op);
        switch (op) {
            case 0: 
                break;
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;    
            case 3:
                ex3();
                break;
            default:
                printf("Exercicio invaldio.\n");
                break;
        }    

    }
    while (op != 0);
}

void ex1() {
    int qnt;
    float value, upperLimit, lowerLimit;
    int contIn= 0, contOut = 0;

    printf("Entre a quantidade de valores a serem lidos: ");
    scanf("%d", &qnt);
    printf("Entre com o limite inferior e o limite superior: ");
    scanf("%f %f", &lowerLimit, &upperLimit);
    for (int i = 0; i < qnt; i++){
        printf("Digite o valor %d: ", i);
        scanf("%f", &value);
        if (value >= lowerLimit && value <= upperLimit) contIn++;
        else contOut++;
    }

    printf("Limite: %.2f a %.2f\n", lowerLimit, upperLimit);
    printf("Valores dentro do limite estabelecido: %d\n", contIn);
    printf("Valores fora do limite estabelecido: %d\n", contOut);
}

void ex2() {
    int cont = 0;
    chars input = IO_readstring("Digite a sequencia de caracteres: ");
    for (int i = 0; i < IO_length(input); i++){
        char c = IO_charAt(input, i);
        if (c >= 'l' && c <= 'q') cont++;
    }
    IO_printf("Letras no intervalo entre 'l' e 'q': %d.\n", cont);
}

int contMin(chars input) {
    int cont = 0;
    for (int i = 0; i < IO_length(input); i++){
        char c = IO_charAt(input, i);
        if (c >= 95 && c <= 122);
    }
    return cont;
}

void ex3() {
    int cont = 0;
    chars input = IO_readstring("Digite uma sequencia de caracteres: ");
    IO_printf("Quantidade de letras minusculas: %d", contMin(input));
    for(int i = 0; i < IO_length(input); i++){
        char c = IO_charAt(input, i);
        if (c >= 'l' && c <= 'q') cont++;
    }
    IO_printf("Letras no intervalo 'l' e 'q': %d.", cont);
    
}
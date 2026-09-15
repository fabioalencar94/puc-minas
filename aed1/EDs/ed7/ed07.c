/*
Aluno: Fabio Guimaraes Alencar 
Matricula: 914866
AED1
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "io.h"

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();

int main() {
    int op;
    do {
        printf("Escolha o exercicio (1 a 10) ou 0 para sair.\n");
        scanf("%d", &op);
        switch (op) {
            case 0: break;
            case 1: ex1(); break;
            case 2: ex2(); break;
            case 3: ex3(); break;
            case 4: ex4(); break;
            case 5: ex5(); break;
            case 6: ex6(); break;
            case 7: ex7(); break;
            case 8: ex8(); break;
            case 9: ex9(); break;
            case 10: ex10(); break;
            default: printf("Exercicio invalido.\n"); break;
        }
    } while (op != 0);
}

void ex1() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0711.txt", "wt");
    for (int i = 1; i <= n; i++) {
        IO_fprintf(file, "%d\t", 3 * (2*i - 1));
    }
    fclose(file);
}

void ex2() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0712.txt", "wt");
    for (int i = n; i > 0; i--){
        IO_fprintf(file, "%d\t", 4 * i);
    }
    fclose(file);  
}

// 03 - 0713: sequencia 1 4 16 64 256...
void ex3() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0713.txt", "wt");
    for (int i = 1; i <= n; i++){
        IO_fprintf(file, "%.0f\t", pow(4, i));
    }
    fclose(file);
}

// 04 - 0714: sequencia decrescente 1/256 1/64 1/16 1/4 1
void ex4() {
}

// 05 - 0715: sequencia 1 1/x^2 1/x^4 1/x^6... (usa pow de math.h)
void ex5() {
}

// 06 - 0716: soma dos primeiros n valores do exercicio 05, grava em RESULTADO06.TXT
void ex6() {
}

// 07 - 0717: soma dos inversos das potencias do exercicio 04, grava em RESULTADO07.TXT
void ex7() {
}

// 08 - 0718: primeiros n termos pares de Fibonacci, grava em RESULTADO08.TXT
void ex8() {
}

// 09 - 0719: conta minusculas em cadeias de um file texto, grava em RESULTADO09.TXT
void ex9() {
}

// 10 - 0720: conta digitos <= 6 em cadeias de caracteres, grava em RESULTADO10.TXT
void ex10() {
}
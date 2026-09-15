#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int age;
    char inicialNome;
    char incialSobrenome;

    printf("Digite a inicial do nome: \n");
    scanf("%c", &inicialNome);
    printf("Digite a inicial do sobrenome: \n");
    scanf(" %c", &incialSobrenome); 
    printf("Digite a idade: \n");
    scanf("%d", &age);

    //usa a propria estrutura do printf pra inverter as iniciais e somar o ano
    printf("As iniciais invertidas %c %c, a idade somada ao ano: %d",
        incialSobrenome, inicialNome, age+2026
    );

    return 0;
}
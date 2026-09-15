#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade;
    idade = 25;
    char nome[50];
    printf("A idade é %d\n", idade);
    printf("Entre o nome: ");
    scanf("%s", nome);
    printf("%s, %d anos\n", nome, idade);
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int peso;
    char nome[50], endereco[50], sexo[50];
    printf("Entre com seu nome: \n");
    scanf(" %49[^\n]", nome);
    printf("Entre com seu endereço: \n");
    scanf(" %49[^\n]", nome);
    printf("Entre com seu sexo: \n");
    scanf("%s", sexo);
    printf("Entre com seu peso: \n");
    scanf("%d", &peso);
    printf("Olá %s ,\nEndereço: %s\n Sexo: %s\n Peso: %d\n", nome, endereco, sexo, peso);  
    return 0;  
}   
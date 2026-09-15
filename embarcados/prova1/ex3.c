#include <stdlib.h>

#include <stdio.h>

int main() {
    int preco, quantidade;
    char tipo;
    float total;

    printf("Digite o preco do produto: ");
    scanf("%d", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite o tipo de cliente (C ou V): ");
    scanf(" %c", &tipo);

    //calcula o valor simples 
    total = preco * quantidade;

    if (tipo == 'C' || tipo == 'V') {
        // desconto VIP
        if (tipo == 'V' || tipo == 'v') {
            total = total * 0.9; 
        }
        // desconto adicional por quantidade
        if (quantidade > 10) {
            total = total * 0.95;
        }
        printf("Valor total: %.2f\n", total);
    } else {
        printf("Tipo de cliente invalido\n");
    }
    return 0;
}
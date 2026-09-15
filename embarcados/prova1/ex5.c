#include <stdio.h>

int main() {
    int totalVendas, valorTotal;
    char meta;

    printf("Digite o total de vendas: ");
    scanf("%d", &totalVendas);

    printf("Digite o valor total vendido: ");
    scanf("%d", &valorTotal);

    printf("Atingiu a meta? (S/N): ");
    scanf(" %c", &meta);

    // testa se a meta eh valida
    if (meta != 'S' && meta != 'N') {
        printf("Caractere invalido\n");
        return 0;
    }

    // nao atingiu a meta
    if (meta == 'N') {
        printf("Desempenho insuficiente\n");
    } else {
        // atingiu a meta
        if (totalVendas > 50 && valorTotal > 10000) {
            printf("Excelente desempenho\n");
        } else if (totalVendas > 30 || valorTotal > 5000) {
            printf("Bom desempenho\n");
        } else {
            printf("Desempenho regular\n");
        }
    }
    return 0;
}
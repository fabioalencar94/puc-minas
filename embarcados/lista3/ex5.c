#include <stdlib.h>

int main() {
    int populacao, tempo;
    float taxa, populacaoFinal;

    printf("Digite o tamanho atual da populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a tava de crescimento anual: \n");
    scanf("%f", &taxa);

    printf("Digite o tempo de observacao: \n");
    scanf("%d", &tempo);

    //calculo da populacao final 
    populacaoFinal = populacao + (populacao * (taxa / 100) * tempo);
    printf("Populacao final: %.0f\n", populacaoFinal);

    if (taxa < 0) printf("Comportamento: Declinio\n");
    else if (taxa == 0) printf("Comportamento: Estavel\n");
    else if (taxa <= 2) printf("Comportamento: Crescimento moderado\n");
    else printf("Comportamento: Crescimento acelerado\n");
}
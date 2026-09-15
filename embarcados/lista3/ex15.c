#include <stdio.h>

int main() {
    int z, eletrons;

    printf("Digite o numero atomico: ");
    scanf("%d", &z);

    printf("Digite o numero de eletrons: ");
    scanf("%d", &eletrons);

    if (eletrons == z)
        printf("Atomo neutro.\n");
    else if (eletrons < z)
        printf("Cation (perdeu %d eletron(s)).\n", z - eletrons);
    else
        printf("Anion (ganhou %d eletron(s)).\n", eletrons - z);
}
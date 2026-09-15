#include <stdio.h>
#include <math.h>

int main() {
    double tensaoEquipamento, tensaoRede;

    printf("Digite a tensao do equipamento (V): ");
    scanf("%lf", &tensaoEquipamento);

    printf("Digite a tensao da rede eletrica (V): ");
    scanf("%lf", &tensaoRede);

    //fabs retorna o valor absoluto e garante que seja positivo
    if (fabs(tensaoEquipamento - tensaoRede) <= 10)
        printf("Equipamento compativel.\n");
    else
        printf("Equipamento incompativel.\n");
}
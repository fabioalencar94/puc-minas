#include <stdio.h>

int main() {
    double v0, a, t, vf;

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%lf", &v0);

    printf("Digite a aceleracao (m/s²): ");
    scanf("%lf", &a);

    printf("Digite o tempo (s): ");
    scanf("%lf", &t);

    //formula da velocidade final
    vf = v0 + a * t;

    printf("\nVelocidade final: %.2f m/s\n", vf);

    if (vf > v0)
        printf("Movimento: Acelerado\n");
    else if (vf < v0)
        printf("Movimento: Retardado\n");
    else
        printf("Movimento: Uniforme\n");
}
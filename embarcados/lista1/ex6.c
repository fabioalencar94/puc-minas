#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //double é o tipo padrao do sqrt e do pow e é mais preciso 
    double x1, x2, y1, y2, distancia;

    //adaptei o scan e o print para usar o double
    printf("Digite o valor de x do primeiro ponto cartesiano: \n");
    scanf("%lf", &x1);
    printf("Digite o valor de y do primeiro ponto cartesiano: \n");
    scanf("%lf", &y1);
    printf("Digite o valor de x do segundo ponto cartesiano: \n");
    scanf("%lf", &x2);
    printf("Digite o valor de y do segundo ponto cartesiano: \n");
    scanf("%lf", &y2);

    //calculo usando a formula 
    double dx = x2 - x1;
    double dy = y2 - y1;
    distancia = sqrt(dx * dx + dy * dy);

    printf("A distancia euclidiana dos pontos (%.2f, %.2f) e (%.2f, %.2f) e %.2f\n",
        x1, y1, x2, y2, distancia);

    return 0;
}
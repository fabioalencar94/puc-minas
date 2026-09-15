#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //declaracao e atribuicao do valor do raio do circulo
    int lado1 = 2;
    int lado2 = 3;

    //calculo area
    float area = (lado1 * lado2) / 2;
    float hipotenusa = sqrt((lado1 * lado1) + (lado2 * lado2));
    
    //print 
    printf("Area igual a %.2f\n", area);
    printf("Hipotenusa igual a %.2f\n", hipotenusa);

    return 0;

}
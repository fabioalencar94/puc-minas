#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //declaracao e atribuicao do valor do raio do circulo
    int raio = 1;

    //calculo area
    float area = M_PI * pow(raio, 2);
    
    //print 
    printf("Area igual a %.2f\n", area);

    return 0;

}
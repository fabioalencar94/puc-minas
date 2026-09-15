#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //declaracao e atribuicao do valor do raio do circulo
    int raio = 5;

    //calculo perimetro
    float perimetro = 2 * M_PI * raio;
    
    //print 
    printf("Perimetro igual a %.2f\n", perimetro);

    return 0;

}
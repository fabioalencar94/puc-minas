#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //declaracao e atribuicao do valor da base do retangulo
    float base = 3.5;

    //declaracao e atribuicao do valor da altura do retangulo
    float altura = 2.0;

    //calculo perimetro
    float perimetro = base * altura;
    
    //print 
    printf("Perimetro igual a %.2f\n", perimetro);

    return 0;

}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float CalcPerimetro (float base, float altura) {
    return (base * 2) + (altura * 2);
}

float CalcArea (float base, float altura){
    return base * altura;
}

float CalcAreaCirculo (float raio) {
    return M_PI * pow(raio, 2);
}

float areaTriangulo (float base, float altura){
    return (base * altura)/2;
}

float hipotenusa (float base, float altura){
    return sqrt(pow(base, 2) + pow(altura, 2));
}

int main() {

    //declaracao e atribuicao do valor da base do retangulo
    float base = 3.5;

    //declaracao e atribuicao do valor da altura do retangulo
    float altura = 2.0;

    // //declaracao, atrivbuicao e calculo da area do retangulo
    // float area = base * altura;

    // //escrita na tela
    // printf("\nUm retangulo de base igual a %.2f", base);
    // printf("\nUm retangulo de altura igual a %.2f", altura);
    // printf("\nUm retangulo de area igual a %.2f\n", area);

    //calculo do perimetro do retangulo 
    float perimetro = CalcPerimetro(base, altura);
    printf("Um retangulo de perimetro igual a %.2f\n", perimetro);


    //calculo perimetro de um quadrado de lado 5
    float perimetroQuadrado = CalcPerimetro(5.0, 5.0);
    printf("Um quadrado de area igual a %.2f\n", perimetroQuadrado);

    //calculo area de um quadrado de lado 7
    float areaQuadrado = CalcArea(7.0, 7.0);
    printf("Um quadrado de area igual a %.2f\n", areaQuadrado);

    //calculo arae do circulo de raio 1
    printf("Um cirulo de raio 1 e area igual a %.2f\n", CalcAreaCirculo(1));

    //calculo area do circulo de raio 5
    printf("Um cirulo de raio 5 e area igual a %.2f\n", CalcAreaCirculo(5));

    //calculo area e hipotenusa triangulo retangulo 
    printf("Um triangulo retangulo de lados 3 e 2 e area %.2f e hipotenusa %.2f", areaTriangulo(3, 2), hipotenusa(3,2));

}


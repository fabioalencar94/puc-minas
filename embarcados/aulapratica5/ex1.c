#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b,c;
    
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a == c: %d\n", a == c);
    printf("(a < b) && (b < c) %d\n", (a < b) && (b < c));
    printf("(a > b) && (b > c) %d\n", (a > b) && (b > c));
    printf("!(a == c): %d\n", !(a == c));

}
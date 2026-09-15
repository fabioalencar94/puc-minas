#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x < 0)
        y = -1;
    else if (x < 2)
        y = 2 * x;
    else if (x <= 4)
        y = x * x - 1;
    else
        y = sqrt(x);

    printf("y = %.2f\n", y);
}
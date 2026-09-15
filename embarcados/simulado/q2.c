#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 6;
    int b = 9;
    char op = 'S';
    bool flag;
    flag = (a * b > 50) && (op == 'S');
    a = (flag) ? a + b : a - b;
    if (op == 'N' || a > 10){
        b = b - a;
    } else {
        b = b + a;
    }
    a = (b < 0) ? -b : b;
    printf("%d %d", a, b);
    return 0;

    //a   b  flag
    //6   9  1
    //15 -6    
    //6
}   
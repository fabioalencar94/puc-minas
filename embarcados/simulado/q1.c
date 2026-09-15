#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 5;
    int r;

    r = ( a > b ) ? a : b > a ? -b : c;
    if (r == ++c) {
        r = r + 2; 
    } else {
        r = r - 3;
    }
    r = (r % 2 == 0) ? r / 2 : r + 1;
    printf("%d %d %d\n", r, --a, b--);

    //a  b  c  r
    //5 10  5 -10
    //4  9  6 -13
    //        -12

    //o b é decrementado apos o print

    return 0;
}       
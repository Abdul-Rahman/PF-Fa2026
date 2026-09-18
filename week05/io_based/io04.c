#include <stdio.h>
void main( ) {
    int k = 10;
    printf("%d\n", 5 + k * 4);
    printf("%d\n", (5 + k) * 4);

    printf("%d\n", k / 5 * 4);
    printf("%d\n", k / (5 * 4));
}

/*
output:
45
60
8
0
This is operator Precedence
*/
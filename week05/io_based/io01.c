#include <stdio.h>
void main( ) {
    int x = 50;
    printf("\n%d", x != 50);
    printf("\n%d", x == 50);
    printf("\n%d", x = 100);
    printf("\n%d", x < 2);
    x = 50;
    printf("\n%d %d %d %d", x != 50, x == 50, x=100, x < 2);
}
#include <stdio.h>
void main( ) {
    int i, j;
    i = -5 - - 5;
    j = -5 - - ( - 5 );
    printf("i = %d j = %d", i, j);
}

/*
output:
i = 0 j = -10

Explanation:
First expression:
a = -5 - (-5);
a = 0;

Second expression:
b = -5 - (-(-5));
b = -5 - 5;
b = -10;
*/
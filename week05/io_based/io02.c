//Integer Division and Float Division
#include <stdio.h>
void main( ){
    int a = 4, b = 6, c, d;
    float e, f;
    c = a / b * b;
    d = b / a * a;
    e = a / b * b;
    f = b / a * a;
    printf("%d %d %f %f", c, d, e, f);
}
/*
output:
0 4 0.000000 4.000000

Explanation:
a / b = 4 / 6 = 0 (integer division)
b / a = 6 / 4 = 1 (integer division)
Multiplication occurs after division.
Even though e and f are floats, the division happens using integers first.
/*
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
#include <stdio.h>
int main() { /* Calculation of gross salary */
    float bs, gs, al, hra;
    printf("Enter basic salary ");
    scanf("%f", &bs);
    if (bs < 1500) {
        al = bs * 10 / 100;
        hra = bs * 90 / 100;
    } else {
        al = 500;
        hra = bs * 98 / 100;
    }
    gs = bs + hra + al;
    printf("gross salary = Rs. %f", gs);
    return 0;
}

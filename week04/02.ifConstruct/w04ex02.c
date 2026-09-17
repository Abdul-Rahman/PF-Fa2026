#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
        if (i > 0) {
        printf("i is positive\n");
    } else if (i < 0) {
        printf("i is negative\n");
    } else if (i == 0) {
        printf("i is zero\n");
    }
    return 0;
}

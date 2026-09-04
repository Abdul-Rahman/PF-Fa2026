#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int a, b, sum;
    // Check whether two arguments were provided
    if (argc != 3) {
        printf("Usage: %s number1 number2\n", argv[0]);
        return 1;
    }
    // Convert command-line arguments from string to integer
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    return 0;
}
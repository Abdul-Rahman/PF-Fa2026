#include <stdio.h>
int main() { 
    int i;
    printf("Enter 1 for Hello or 0 for Bye: ");
    scanf("%d", &i);  
    (i == 1 ? printf("Hello") : printf("Bye"));
    return 0;
}

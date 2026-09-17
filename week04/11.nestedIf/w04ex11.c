#include <stdio.h>
int main() {
    int i = 10;
    if (i == 10) {
        if (i < 15) // First Nested if statement
            printf("i is smaller than 15\n");
            // Will only be executed if statement above is true
        
        if (i < 12) // Second Nested if statement
            printf("i is smaller than 12 too\n");
        else
            printf("i is greater than 15");
    }
    return 0;
}



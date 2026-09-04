#include <stdio.h>          // File Inclusion
#define PI 3.14             // Macro Definition
#define SQUARE(x) ((x) * (x))
#define SHOW_MESSAGE         // Used for Conditional Compilation
int main() {
    float radius = 5.0;
    // Macro Expansion
    float area = PI * SQUARE(radius);
    printf("Radius = %.2f\n", radius);
    printf("Area = %.2f\n", area);
    // Conditional Compilation
    #ifdef SHOW_MESSAGE
        printf("This message is included by the preprocessor.\n");
    #endif
    return 0;
}
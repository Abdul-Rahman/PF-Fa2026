#include <stdio.h>
int main() {
    float radius, area;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}
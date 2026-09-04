#include <stdio.h>
#include <stdbool.h>
struct Student { // User Defined Data Type
    char name[20];
    int age;
};
int main() {
    // Numeric Data
    int age = 20;              // Integer
    float height = 5.8;        // Real number
    double salary = 75000.50;  // Real number with more precision
    // Character Data
    char grade = 'A';          // Single character
    char name[] = "Ali";       // String (array of characters)
    // Logical Data
    bool passed = true;        // True or False
    // User Defined Data Type
    struct Student student1;
    student1.age = 20;
    printf("Enter student name: ");
    scanf("%19s", student1.name);

    printf("Age      : %d\n", age);
    printf("Height   : %.1f\n", height);
    printf("Salary   : %.2f\n", salary);
    printf("Grade    : %c\n", grade);
    printf("Name     : %s\n", name);
    printf("Passed   : %d\n", passed);
    printf("Name     : %s\n", student1.name);
    printf("Age      : %d\n", student1.age);
    return 0;
}

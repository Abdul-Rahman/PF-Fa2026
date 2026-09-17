#include <stdio.h>
int main() {
    int marks;
    printf("Please Enter the marks ");
    scanf("%d", &marks);
    switch (marks){
        case 90 ... 100:
            printf("Grade: A\n");
            if (marks >= 95){
                printf("Outstanding performance!\n");
            } else{
                printf("Excellent performance!\n");
            }
            break;
        case 80 ... 89:
            printf("Grade: B\n");
            if (marks >= 85){
                printf("Very good performance!\n");
            } else {
                printf("Good performance!\n");
            }
            break;
        case 70 ... 79:
            printf("Grade: C\n");
            break;
        case 60 ... 69:
            printf("Grade: D\n");
            break;
        case 0 ... 59:
            printf("Grade: F\n");
            if (marks < 50) {
                printf("You need serious improvement.\n");
            } else {
                printf("You are close to passing.\n");
            }
            break;
        default:
            printf("Invalid marks!\n");
    }
    return 0;
}


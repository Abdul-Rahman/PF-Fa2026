#include <stdio.h>
int main() {
    /* Constants */
    const float PASS_MARK = 50.0;
    const float MIN_ATTENDANCE = 75.0;
    const float SCHOLARSHIP_MARK = 85.0;
    /* Variables */
    char name[50];
    int rollNumber;
    int age;
    float programming;
    float mathematics;
    float english;
    float attendance;
    int assignmentsDone;
    int totalAssignments;
    float total;
    float average;
    float assignmentPercentage;

    /* Input */
    printf("========================================\n");
    printf("\tSTUDENT ACADEMIC ADVISOR\n");
    printf("========================================\n\n");

    printf("Enter student name: ");
    scanf("%49s", name);
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("\nEnter Programming marks: ");
    scanf("%f", &programming);
    printf("Enter Mathematics marks: ");
    scanf("%f", &mathematics);
    printf("Enter English marks: ");
    scanf("%f", &english);
    printf("Enter attendance (%%): ");
    scanf("%f", &attendance);
    printf("Enter assignments completed: ");
    scanf("%d", &assignmentsDone);
    printf("Enter total assignments: ");
    scanf("%d", &totalAssignments);

    /* Data manipulation */
    total = programming + mathematics + english;
    average = total / 3.0;
    assignmentPercentage =
        (assignmentsDone * 100.0) / totalAssignments;

    /* Output */
    printf("\n========================================\n");
    printf("\tACADEMIC REPORT\n");
    printf("========================================\n");
    printf("Student        : %s\n", name);
    printf("Roll Number    : %d\n", rollNumber);
    printf("Age            : %d\n", age);
    printf("----------------------------------------\n");
    printf("Total Marks    : %.2f / 300\n", total);
    printf("Average        : %.2f\n", average);
    printf("Attendance     : %.2f%%\n", attendance);
    printf("Assignments    : %.2f%%\n", assignmentPercentage);
    /* Grade decision */
    if (average >= 85){
        printf("Grade          : A\n");
    }
    else if (average >= 70) {
        printf("Grade          : B\n");
    }
    else if (average >= 60) {
        printf("Grade          : C\n");
    }
    else if (average >= PASS_MARK) {
        printf("Grade          : D\n");
    }
    else {
        printf("Grade          : F\n");
    }

    /* Pass/Fail */
    if (average >= PASS_MARK) {
        printf("Status         : PASS\n");
    }
    else {
        printf("Status         : FAIL\n");
    }

    /* Attendance */
    if (attendance < MIN_ATTENDANCE) {
        printf("Attendance     : WARNING\n");
    }
    else {
        printf("Attendance     : GOOD\n");
    }

    /* Scholarship */
    if (average >= SCHOLARSHIP_MARK && attendance >= 80) {
        printf("Scholarship    : ELIGIBLE\n");
    }
    else {
        printf("Scholarship    : NOT ELIGIBLE\n");
    }

    /* Advice */
    printf("----------------------------------------\n");

    if (average >= 85 && attendance >= 80) {
        printf("Advice         : Excellent performance!\n");
    }
    else if (average >= 70 && attendance >= 75) {
        printf("Advice         : Good work. Aim higher!\n");
    }
    else if (attendance < MIN_ATTENDANCE) {
        printf("Advice         : Improve your attendance.\n");
    }
    else {
        printf("Advice         : Work harder on your studies.\n");
    }
    printf("========================================\n");
    printf("\tEND OF REPORT\n");
    printf("========================================\n");
    return 0;
}
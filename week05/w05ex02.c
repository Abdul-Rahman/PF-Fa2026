#include <stdio.h>

int main()
{
    int department, semester;
    float cgpa, attendance;
    char communityService;
    float requiredCGPA = 0;

    printf("===== UNIVERSITY SCHOLARSHIP VERIFICATION =====\n");

    printf("1. Computer Science\n");
    printf("2. Software Engineering\n");
    printf("3. Information Technology\n");

    printf("Enter Department Code: ");
    scanf("%d", &department);

    printf("Enter Semester Number (1-4): ");
    scanf("%d", &semester);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter Attendance Percentage: ");
    scanf("%f", &attendance);

    printf("Completed Community Service? (Y/N): ");
    scanf(" %c", &communityService);

    switch(department)
    {
        case 1:
            printf("\nDepartment: Computer Science\n");

            switch(semester)
            {
                case 1:
                case 2:
                    requiredCGPA = 3.0;
                    break;

                case 3:
                case 4:
                    requiredCGPA = 3.2;
                    break;

                default:
                    printf("Invalid Semester.\n");
                    return 0;
            }
            break;

        case 2:
            printf("\nDepartment: Software Engineering\n");

            switch(semester)
            {
                case 1:
                case 2:
                    requiredCGPA = 2.8;
                    break;

                case 3:
                case 4:
                    requiredCGPA = 3.0;
                    break;

                default:
                    printf("Invalid Semester.\n");
                    return 0;
            }
            break;

        case 3:
            printf("\nDepartment: Information Technology\n");

            switch(semester)
            {
                case 1:
                case 2:
                    requiredCGPA = 2.7;
                    break;

                case 3:
                case 4:
                    requiredCGPA = 2.9;
                    break;

                default:
                    printf("Invalid Semester.\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Department Code.\n");
            return 0;
    }

    /* Logical operators for eligibility */
    int eligible;

    eligible = (cgpa >= requiredCGPA) &&
               (attendance >= 80) &&
               (communityService == 'Y' || communityService == 'y');

    printf("\n===== SCHOLARSHIP RESULT =====\n");
    printf("Required CGPA: %.2f\n", requiredCGPA);

    /* Conditional operator */
    printf("Scholarship Status: %s\n",
           eligible ? "Eligible" : "Not Eligible");

    /* Modulus operator */
    if(semester % 2 == 0)
        printf("The student is enrolled in an even semester.\n");
    else
        printf("The student is enrolled in an odd semester.\n");

    return 0;
}


#include <stdio.h>

int main()
{
    int membership, material, overdueDays;
    float dailyFine = 0;
    float totalFine, penalty, finalFine;
    int waiver = 0;

    printf("===== DIGITAL LIBRARY MANAGEMENT SYSTEM =====\n");

    printf("1. Regular Student\n");
    printf("2. Faculty Member\n");
    printf("3. External Member\n");

    printf("Enter Membership Type: ");
    scanf("%d", &membership);

    printf("\nMaterial Types:\n");
    printf("1. Book\n");
    printf("2. Magazine\n");
    printf("3. Research Journal\n");

    printf("Enter Material Type: ");
    scanf("%d", &material);

    switch(membership)
    {
        case 1:
            printf("\nMembership: Regular Student\n");

            switch(material)
            {
                case 1:
                    dailyFine = 10;
                    break;

                case 2:
                    dailyFine = 5;
                    break;

                case 3:
                    dailyFine = 15;
                    break;

                default:
                    printf("Invalid Material Type.\n");
                    return 0;
            }
            break;

        case 2:
            printf("\nMembership: Faculty Member\n");

            switch(material)
            {
                case 1:
                    dailyFine = 5;
                    break;

                case 2:
                    dailyFine = 3;
                    break;

                case 3:
                    dailyFine = 8;
                    break;

                default:
                    printf("Invalid Material Type.\n");
                    return 0;
            }
            break;

        case 3:
            printf("\nMembership: External Member\n");

            switch(material)
            {
                case 1:
                    dailyFine = 20;
                    break;

                case 2:
                    dailyFine = 10;
                    break;

                case 3:
                    dailyFine = 25;
                    break;

                default:
                    printf("Invalid Material Type.\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Membership Type.\n");
            return 0;
    }

    printf("\nEnter Number of Overdue Days: ");
    scanf("%d", &overdueDays);

    totalFine = dailyFine * overdueDays;

    /* Conditional operator for additional penalty */
    penalty = (overdueDays > 7) ? 50 : 0;

    /* Logical operators for fine waiver */
    waiver = (membership == 2) && (overdueDays <= 3);

    if(waiver)
    {
        finalFine = 0;
        printf("\nFine Waiver Applied.\n");
    }
    else
    {
        finalFine = totalFine + penalty;
    }

    printf("\n===== LIBRARY FINE DETAILS =====\n");
    printf("Daily Fine: Rs. %.2f\n", dailyFine);
    printf("Overdue Days: %d\n", overdueDays);
    printf("Original Fine: Rs. %.2f\n", totalFine);
    printf("Additional Penalty: Rs. %.2f\n", penalty);
    printf("Final Fine: Rs. %.2f\n", finalFine);

    /* Modulus operator */
    if(overdueDays % 3 == 0)
        printf("The overdue period is divisible by 3.\n");
    else
        printf("The overdue period is not divisible by 3.\n");

    return 0;
}

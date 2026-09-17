#include <stdio.h>

int main() {
    int passengerType;
    int destination;
    int documentsValid;
    float baggageWeight;

    int baggageAllowance;
    int excessBaggage;
    int verificationCode;

    printf("============================================\n");
    printf("       AIRPORT PASSENGER CLASSIFICATION\n");
    printf("============================================\n");

    printf("\nSelect Passenger Type:\n");
    printf("1. Adult\n");
    printf("2. Student\n");
    printf("3. Senior Citizen\n");
    printf("Enter choice: ");
    scanf("%d", &passengerType);

    printf("\nSelect Destination:\n");
    printf("1. Domestic\n");
    printf("2. International\n");
    printf("Enter choice: ");
    scanf("%d", &destination);

    printf("\nEnter Baggage Weight (kg): ");
    scanf("%f", &baggageWeight);

    printf("Are travel documents valid? (1=Yes, 0=No): ");
    scanf("%d", &documentsValid);

    /*
       Passenger verification code generated
       using modulus operator.
    */
    verificationCode = ((int)baggageWeight % 100) + passengerType;

    printf("\nPassenger Verification Code: %d\n", verificationCode);

    switch(passengerType)
    {
        case 1:
            printf("\nPassenger Category: Adult\n");

            switch(destination)
            {
                case 1:
                    baggageAllowance = 20;

                    printf("Destination: Domestic\n");
                    printf("Baggage Allowance: %d kg\n", baggageAllowance);

                    if(baggageWeight <= baggageAllowance && documentsValid == 1)
                    {
                        printf("Security Category: Standard Screening\n");
                        printf("Travel Status: Approved\n");
                    }
                    else if(baggageWeight > baggageAllowance && documentsValid == 1)
                    {
                        excessBaggage = (int)baggageWeight - baggageAllowance;

                        printf("Security Category: Standard Screening\n");
                        printf("Excess Baggage: %d kg\n", excessBaggage);
                        printf("Travel Status: Excess baggage charges required\n");
                    }
                    else
                    {
                        printf("Travel Status: Documents Invalid\n");
                    }
                    break;

                case 2:
                    baggageAllowance = 30;

                    printf("Destination: International\n");
                    printf("Baggage Allowance: %d kg\n", baggageAllowance);

                    if(documentsValid == 1 && baggageWeight <= baggageAllowance)
                    {
                        printf("Security Category: International Screening\n");
                        printf("Travel Status: Approved\n");
                    }
                    else if(documentsValid == 1 && baggageWeight > baggageAllowance)
                    {
                        printf("Security Category: Enhanced Screening\n");
                        printf("Travel Status: Excess baggage charges required\n");
                    }
                    else
                    {
                        printf("Travel Status: Travel Authorization Required\n");
                    }
                    break;

                default:
                    printf("Invalid destination selection.\n");
            }
            break;

        case 2:
            printf("\nPassenger Category: Student\n");

            switch(destination)
            {
                case 1:
                    baggageAllowance = 15;

                    printf("Destination: Domestic\n");
                    printf("Student Baggage Allowance: %d kg\n", baggageAllowance);

                    if(documentsValid == 1 && baggageWeight <= baggageAllowance)
                    {
                        printf("Security Category: Standard Screening\n");
                        printf("Travel Status: Approved\n");
                    }
                    else if(documentsValid == 1 && baggageWeight > baggageAllowance)
                    {
                        printf("Security Category: Standard Screening\n");
                        printf("Travel Status: Student Excess Baggage Charges Apply\n");
                    }
                    else
                    {
                        printf("Travel Status: Documents Invalid\n");
                    }
                    break;

                case 2:
                    baggageAllowance = 25;

                    printf("Destination: International\n");
                    printf("Student Baggage Allowance: %d kg\n", baggageAllowance);

                    if(documentsValid == 1 && baggageWeight <= baggageAllowance)
                    {
                        printf("Security Category: International Screening\n");
                        printf("Travel Status: Approved\n");
                    }
                    else if(documentsValid == 1 && baggageWeight > baggageAllowance)
                    {
                        printf("Security Category: Enhanced Screening\n");
                        printf("Travel Status: Excess baggage charges required\n");
                    }
                    else
                    {
                        printf("Travel Status: Travel Authorization Required\n");
                    }
                    break;

                default:
                    printf("Invalid destination selection.\n");
            }
            break;

        case 3:
            printf("\nPassenger Category: Senior Citizen\n");

            switch(destination)
            {
                case 1:
                    baggageAllowance = 25;

                    printf("Destination: Domestic\n");
                    printf("Baggage Allowance: %d kg\n", baggageAllowance);

                    if(documentsValid == 1 && baggageWeight <= baggageAllowance)
                    {
                        printf("Security Category: Priority Assistance Screening\n");
                        printf("Travel Status: Approved\n");
                    }
                    else if(documentsValid == 1 && baggageWeight > baggageAllowance)
                    {
                        printf("Security Category: Priority Assistance Screening\n");
                        printf("Travel Status: Excess baggage charges required\n");
                    }
                    else
                    {
                        printf("Travel Status: Documents Invalid\n");
                    }
                    break;

                case 2:
                    baggageAllowance = 35;

                    printf("Destination: International\n");
                    printf("Baggage Allowance: %d kg\n", baggageAllowance);

                    if(documentsValid == 1 && baggageWeight <= baggageAllowance)
                    {
                        printf("Security Category: Priority International Screening\n");
                        printf("Travel Status: Approved\n");
                    }
                    else if(documentsValid == 1 && baggageWeight > baggageAllowance)
                    {
                        printf("Security Category: Enhanced Screening\n");
                        printf("Travel Status: Excess baggage charges required\n");
                    }
                    else
                    {
                        printf("Travel Status: Travel Authorization Required\n");
                    }
                    break;

                default:
                    printf("Invalid destination selection.\n");
            }
            break;

        default:
            printf("Invalid passenger type.\n");
    }

    return 0;
}
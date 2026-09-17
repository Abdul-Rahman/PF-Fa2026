#include <stdio.h>

int main()
{
    int department;
    int age;
    int heartRate;
    int conscious;
    int severity;
    float temperature;

    int critical = 0;
    int caseNumber;

    printf("============================================\n");
    printf("          HOSPITAL EMERGENCY TRIAGE\n");
    printf("============================================\n");

    printf("\nSelect Department:\n");
    printf("1. General Emergency\n");
    printf("2. Cardiology\n");
    printf("3. Neurology\n");
    printf("4. Trauma\n");
    printf("Enter choice: ");
    scanf("%d", &department);

    printf("Enter Patient Age: ");
    scanf("%d", &age);

    printf("Enter Heart Rate (BPM): ");
    scanf("%d", &heartRate);

    printf("Enter Body Temperature (Celsius): ");
    scanf("%f", &temperature);

    printf("Is Patient Conscious? (1=Yes, 0=No): ");
    scanf("%d", &conscious);

    printf("Enter Emergency Severity:\n");
    printf("1. Low\n");
    printf("2. Moderate\n");
    printf("3. High\n");
    scanf("%d", &severity);

    caseNumber = (age % 100) + (heartRate % 100);

    printf("\nPatient Case Number: %d\n", caseNumber);

    /*
       Critical condition:
       Abnormal heart rate AND unconsciousness
    */
    if((heartRate < 60 || heartRate > 100) && conscious == 0)
    {
        critical = 1;
    }

    if(critical == 1)
    {
        printf("\nEmergency Classification: CRITICAL\n");
        printf("Immediate medical intervention required.\n");
    }
    else
    {
        switch(department)
        {
            case 1:
                printf("\nDepartment: General Emergency\n");

                switch(severity)
                {
                    case 1:
                        printf("Triage Level: Non-Urgent\n");
                        break;

                    case 2:
                        printf("Triage Level: Urgent\n");
                        break;

                    case 3:
                        printf("Triage Level: Emergency\n");
                        break;

                    default:
                        printf("Invalid severity level.\n");
                }
                break;

            case 2:
                printf("\nDepartment: Cardiology\n");

                switch(severity)
                {
                    case 1:
                        printf("Triage Level: Routine Cardiac Evaluation\n");
                        break;

                    case 2:
                        printf("Triage Level: Priority Cardiac Assessment\n");
                        break;

                    case 3:
                        printf("Triage Level: Immediate Cardiac Intervention\n");
                        break;

                    default:
                        printf("Invalid severity level.\n");
                }
                break;

            case 3:
                printf("\nDepartment: Neurology\n");

                switch(severity)
                {
                    case 1:
                        printf("Triage Level: Neurological Observation\n");
                        break;

                    case 2:
                        printf("Triage Level: Priority Neurological Assessment\n");
                        break;

                    case 3:
                        printf("Triage Level: Immediate Neurological Intervention\n");
                        break;

                    default:
                        printf("Invalid severity level.\n");
                }
                break;

            case 4:
                printf("\nDepartment: Trauma\n");

                switch(severity)
                {
                    case 1:
                        printf("Triage Level: Minor Trauma Care\n");
                        break;

                    case 2:
                        printf("Triage Level: Urgent Trauma Care\n");
                        break;

                    case 3:
                        printf("Triage Level: Immediate Trauma Stabilization\n");
                        break;

                    default:
                        printf("Invalid severity level.\n");
                }
                break;

            default:
                printf("Invalid department selection.\n");
        }
    }

    /*
       Priority rule for elderly patients
    */
    if(age > 60 && severity >= 2)
    {
        printf("\nAdditional Priority: Senior Citizen Priority Activated.\n");
    }

    /*
       Temperature warning
    */
    if(temperature >= 39 || temperature < 35)
    {
        printf("Temperature Alert: Abnormal Temperature Detected.\n");
    }

    return 0;
}
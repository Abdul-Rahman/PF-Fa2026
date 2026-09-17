#include <stdio.h>
int main() {
    int system, severity;
    int mileage;
    int warranty;
    int serviceCode;
    printf("===== SMART VEHICLE DIAGNOSTIC SYSTEM =====\n");
    printf("\nSelect Vehicle Subsystem:\n");
    printf("1. Engine\n");
    printf("2. Transmission\n");
    printf("3. Braking System\n");
    printf("4. Electrical System\n");
    printf("Enter choice: ");
    scanf("%d", &system);
    printf("Enter Diagnostic Severity:\n");
    printf("1. Minor\n");
    printf("2. Moderate\n");
    printf("3. Critical\n");
    printf("Enter choice: ");
    scanf("%d", &severity);
    printf("Enter Vehicle Mileage (km): ");
    scanf("%d", &mileage);
    printf("Is vehicle under warranty? (1=Yes, 0=No): ");
    scanf("%d", &warranty);
    serviceCode = (mileage % 100) + severity;
    printf("\nGenerated Service Code: %d\n", serviceCode);
    if(severity == 3 || mileage > 200000) {
        printf("PRIORITY LEVEL: HIGH\n");
    } else {
        printf("PRIORITY LEVEL: NORMAL\n");
    }
    switch(system) {
        case 1:
            printf("\n--- ENGINE DIAGNOSTICS ---\n");
            switch(severity) {
                case 1:
                    printf("Action: Schedule engine inspection.");
                    break;
                case 2:
                    printf("Action: Perform engine maintenance.");
                    break;
                case 3:
                    printf("Action: Immediate engine shutdown required.");
                    break;
                default:
                    printf("Invalid severity.");
            }
            break;
        case 2:
            printf("\n--- TRANSMISSION DIAGNOSTICS ---\n");
            switch(severity) {
                case 1:
                    printf("Action: Monitor transmission performance.");
                    break;
                case 2:
                    printf("Action: Service required within 24 hours.");
                    break;
                case 3:
                    printf("Action: Vehicle towing required.");
                    break;
                default:
                    printf("Invalid severity.");
            }
            break;
        case 3:
            printf("\n--- BRAKING SYSTEM DIAGNOSTICS ---\n");
            switch(severity) {
                case 1:
                    printf("Action: Immediate brake inspection required.");
                    break;
                case 2:
                    printf("Action: Avoid long-distance driving.");
                    break;
                case 3:
                    printf("Action: Vehicle operation prohibited.");
                    break;
                default:
                    printf("Invalid severity.");
            }
            break;
        case 4:
            printf("\n--- ELECTRICAL SYSTEM DIAGNOSTICS ---\n");
            switch(severity){
                case 1:
                    printf("Action: Issue may be temporarily ignored.");
                    break;
                case 2:
                    printf("Action: Battery and wiring diagnostics required.");
                    break;
                case 3:
                    printf("Action: Complete electrical isolation required.");
                    break;
                default:
                    printf("Invalid severity.");
            }
            break;
        default:
            printf("Invalid subsystem selection.");
    }
    if(warranty == 1) {
        printf("\nWarranty Status: Eligible for warranty evaluation.");
    } else {
        printf("\nWarranty Status: Customer-paid service.");
    }
    return 0;
}
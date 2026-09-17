#include <stdio.h>
int main() {
    int evidenceType;
    int encrypted;
    int sensitive;
    int priority;
    float size;
    printf("===== DIGITAL FORENSICS EVIDENCE SYSTEM =====\n");
    printf("\nSelect Evidence Type:\n");
    printf("1. Mobile Device\n");
    printf("2. Computer System\n");
    printf("3. Network Capture\n");
    printf("4. Cloud Account\n");
    printf("Enter choice: ");
    scanf("%d", &evidenceType);
    printf("Enter Evidence Size (GB): ");
    scanf("%f", &size);
    printf("Is Encryption Detected? (1=Yes, 0=No): ");
    scanf("%d", &encrypted);
    printf("Does Evidence Contain Sensitive Information? (1=Yes, 0=No): ");
    scanf("%d", &sensitive);
    printf("\nSelect Investigation Priority:\n");
    printf("1. Low\n");
    printf("2. Medium\n");
    printf("3. High\n");
    scanf("%d", &priority);
    switch(evidenceType) {
        case 1:
            printf("\n--- MOBILE DEVICE EVIDENCE ---\n");
            if(encrypted == 1) {
                printf("Classification: Encrypted Mobile Evidence.");
                printf("\nAction: Specialized forensic extraction required.");
            } else {
                printf("Classification: Standard Mobile Evidence.");
                printf("\nAction: Standard forensic acquisition may proceed.");
            }
            break;
        case 2:
            printf("\n--- COMPUTER SYSTEM EVIDENCE ---\n");
            if(size > 500 && encrypted == 1) {
                printf("Classification: Large Encrypted Storage.");
                printf("\nPriority: HIGH.");
            } else if(size > 500 || encrypted == 1) {
                printf("Classification: Requires Additional Analysis.");
            } else {
                printf("Classification: Standard Computer Evidence.");
            }
            break;
        case 3:
            printf("\n--- NETWORK CAPTURE EVIDENCE ---\n");
            if((int)size % 2 == 0) {
                printf("Classification: Structured Network Capture.");
            } else {
                printf("Classification: Irregular Traffic Data.");
            }
            printf("\nAction: Packet-level analysis required.");
            break;
        case 4:
            printf("\n--- CLOUD ACCOUNT EVIDENCE ---\n");
            if(sensitive == 1 && encrypted == 1) {
                printf("Classification: Sensitive Encrypted Cloud Evidence.");
                printf("\nAction: Verify legal authorization before acquisition.");
            } else if(sensitive == 1 || encrypted == 1) {
                printf("Classification: Requires Additional Authorization Review.");
            } else {
                printf("Classification: Standard Cloud Evidence.");
            }
            break;
        default:
            printf("Invalid evidence type.");
    }
    printf("\n\nInvestigation Priority: ");
    switch(priority) {
        case 1:
            printf("LOW");
            break;
        case 2:
            printf("MEDIUM");
            break;
        case 3:
            printf("HIGH");
            break;
        default:
            printf("INVALID");
    }
    int priorityScore = (priority == 3) ? 100 : (priority == 2 ? 50 : 20);
    printf("\nPriority Score: %d", priorityScore);
    return 0;
}

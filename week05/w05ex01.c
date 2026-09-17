#include <stdio.h>

int main() {
    int category, item, quantity;
    float price = 0, total, discount, finalAmount;
    int isEven;

    printf("===== UNIVERSITY CAFETERIA =====\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");

    printf("Enter Meal Category: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("\n--- Breakfast Menu ---\n");
            printf("1. Paratha - Rs. 80\n");
            printf("2. Omelette - Rs. 120\n");
            printf("3. Tea - Rs. 60\n");

            printf("Enter Food Item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    price = 80;
                    break;
                case 2:
                    price = 120;
                    break;
                case 3:
                    price = 60;
                    break;
                default:
                    printf("Invalid Food Item.\n");
                    return 0;
            }
            break;

        case 2:
            printf("\n--- Lunch Menu ---\n");
            printf("1. Biryani - Rs. 250\n");
            printf("2. Burger - Rs. 300\n");
            printf("3. Pizza - Rs. 450\n");

            printf("Enter Food Item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    price = 250;
                    break;
                case 2:
                    price = 300;
                    break;
                case 3:
                    price = 450;
                    break;
                default:
                    printf("Invalid Food Item.\n");
                    return 0;
            }
            break;

        case 3:
            printf("\n--- Dinner Menu ---\n");
            printf("1. Chicken Karahi - Rs. 500\n");
            printf("2. BBQ - Rs. 600\n");
            printf("3. Pasta - Rs. 400\n");

            printf("Enter Food Item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    price = 500;
                    break;
                case 2:
                    price = 600;
                    break;
                case 3:
                    price = 400;
                    break;
                default:
                    printf("Invalid Food Item.\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Meal Category.\n");
            return 0;
    }

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    /* Conditional operator for discount eligibility */
    discount = (quantity > 5) ? total * 0.10 : 0;

    finalAmount = total - discount;

    /* Modulus operator */
    isEven = quantity % 2;

    printf("\n===== BILL DETAILS =====\n");
    printf("Price Per Item: Rs. %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Original Bill: Rs. %.2f\n", total);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);

    if(isEven == 0)
        printf("The quantity is even.\n");
    else
        printf("The quantity is odd.\n");

    return 0;
}

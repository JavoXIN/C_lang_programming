#include <stdio.h>
#define RATE1 8.72
#define RATE2 9.50
#define RATE3 10.00
#define RATE4 15.20
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
#define TAX1_LEVEL 300
#define TAX2_LEVEL TAX1_LEVEL + 150
#define TAX1_FULL TAX1 * TAX1_LEVEL
#define TAX2_FULL TAX2 * 150 + TAX1_FULL
int main(void)
{
    float rate, hours, gross, tax, net;
    int m, choice;


    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.72/hr                           2) $9.50/hr\n");
    printf("3) $10.00/hr                          4) $15.20/hr\n");
    printf("5) quit\n");


    m = scanf("%d", &choice);

    while (m != 1)
    {

        printf("Please input an integer between 1 to 5.\n");
        m = scanf("%d", &choice);
    }

    while (m == 1)
    {
        switch (choice)
        {
        case 1:    rate = RATE1;
            break;
        case 2:    rate = RATE2;
            break;
        case 3:    rate = RATE3;
            break;
        case 4:    rate = RATE4;
            break;
        case 5:    goto quit;
        default:    printf("Please input a number from 1 to 5 to choose!\n");
            goto enteragain;
        }
        printf("You've chosen the rate number%d: %.2f.\n", choice, rate);


        printf("\nNow enter the hours worked in a week: \n");
        scanf("%f", &hours);

        if (hours <= 40)
            gross = rate * hours;

        else
            gross = rate * 40 + 1.5 * rate * (hours - 40);


        if (gross <= TAX1_LEVEL)
            tax = gross * TAX1;
        else if (gross <= TAX2_LEVEL)
            tax = TAX1_FULL + (gross - TAX1_LEVEL) * TAX2;
        else
            tax = TAX2_FULL + (gross - TAX2_LEVEL) * TAX3;


        net = gross - tax;


        printf("\nThe gross pay is %.2f.\nTaxes : %.2f.\nNet pay is %.2f.\n\n", gross, tax, net);


        printf("Please enter your choice again: \n");
    enteragain: m = scanf("%d", &choice);
        while (m != 1)
        {
            printf("Please input an integer between 1 to 5.\n");
            m = scanf("%d", &choice);
        }
    }

quit: printf("Bye.\n");

    return 0;
}
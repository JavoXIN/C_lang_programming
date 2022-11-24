#include <stdio.h>
const int Day_per_week = 7;
int main(void)
{
    int week;
    int day;
    int number;

    while (number > 0)

    {
        printf("Enter the number of days:");
        scanf("%d", &number);
        week = number / Day_per_week;  
        printf("your number is %d weeks and", week);
        day = number % Day_per_week;
        printf(" %d days.\n", day);
    }

    return 0;
}
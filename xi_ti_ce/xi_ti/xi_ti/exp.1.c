#include<stdio.h>
int main()
{
    int date, delta, days;
    printf("Please enter a date in the format MMDD: ");
    scanf_s("%d", &date);
    if (date / 100 == 10)
    {
        delta = date % 100;
        days = (delta + 3) % 7;
    }
    else if (date / 100 == 11)
    {
        delta = date % 100 + 31;
        days = (delta + 3) % 7;
    }
    else if (date / 100 == 12)
    {
        delta = date % 100 + 61;
        days = (delta + 3) % 7;
    }
    printf("The day of the week is: ĞÇÆÚ%d", days);
    return 0;
}
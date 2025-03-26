// Input a number between one and seven and print appropriate name of the week day.
#include <stdio.h>
#include <conio.h>
void main()
{
    int D;
    system("cls");
    printf("Enter a number between 1 and 7 = ");
    scanf("%d", &D);
    if (D == 1)
    {
        printf("Sunday");
    }
    else if (D == 2)
    {
        printf("Monday");
    }
    else if (D == 3)
    {
        printf("Tuesday");
    }
    else if (D == 4)
    {
        printf("Wednesday");
    }
    else if (D == 5)
    {
        printf("Thursday");
    }
    else if (D == 6)
    {
        printf("Friday");
    }
    else if (D == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invalid Input");
    }
    printf("\nGood Day");
}
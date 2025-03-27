// Name of the Week day.
#include <stdio.h>
#include <conio.h>
void main()
{
    int D;
    system("cls");
    printf("Input a number between 1 to 7 = ");
    scanf("%d", &D);
    switch (D)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Input");
    }
    printf("\nGood Day");
}
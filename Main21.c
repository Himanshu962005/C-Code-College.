// Number Equivalent in Word (1-5).
#include <stdio.h>
#include <conio.h>
void main()
{
    int N;
    system("cls");
    printf("Enter a number between 1 and 5 = ");
    scanf("%d", &N);
    if (N == 1)
    {
        printf("ONE");
    }
    else if (N == 2)
    {
        printf("TWO");
    }
    else if (N == 3)
    {
        printf("THREE");
    }
    else if (N == 4)
    {
        printf("FOUR");
    }
    else if (N == 5)
    {
        printf("FIVE");
    }
    else
    {
        printf("Invalid Input");
    }
    printf("\nGood Day!");
}
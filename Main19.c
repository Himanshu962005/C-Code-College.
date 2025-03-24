// Marks & Division.
#include <stdio.h>
#include <conio.h>
void main()
{
    int M, S, E, T;
    float PER;
    system("cls");
    printf("Input Marks For Maths = ");
    scanf("%d", &M);
    printf("Input Marks For Science = ");
    scanf("%d", &S);
    printf("Input Marks For English = ");
    scanf("%d", &E);
    T = M + S + E;
    PER = (float)T * 100 / 300;
    printf("\nTotal Marks = %d", T);
    printf("\nPercentage = %f", PER);
    if (PER < 33)
    {
        printf("\nFailed");
    }
    else
    {
        if (PER >= 33 && PER < 45)
        {
            printf("\nPassed with Third Division");
        }
        else
        {
            if (PER >= 45 && PER < 60)
            {
                printf("\nPassed with Second Division");
            }
            else
            {
                if (PER >= 60 && PER < 75)
                {
                    printf("\nPassed with First Division");
                }
                else
                {
                    printf("\nPassed with Honours");
                }
            }
        }
    }
    printf("\nBest of Luck");
}
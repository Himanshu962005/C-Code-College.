// Finding Biggest Among 3 Numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A, B, C;
    system("cls");
    printf("Input Value for A = ");
    scanf("%d", &A);
    printf("Input Value for B = ");
    scanf("%d", &B);
    printf("Input Value for C = ");
    scanf("%d", &C);
    if (A > B)
    {
        if (A > C)
        {
            printf("A is the biggest ");
        }
        else
        {
            printf("C is the biggest ");
        }
    }
    else
    {
        if (B > C)
        {
            printf("B is the biggest ");
        }
        else
        {
            printf("C is the biggest ");
        }
    }
    printf("\nGood Day");
}
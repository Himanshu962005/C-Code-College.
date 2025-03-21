// Compare Between Two Numbers also tested for their equality.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A, B;
    system("cls");
    printf("Input First Number = ");
    scanf("%d", &A);
    printf("Input Second Number = ");
    scanf("%d", &B);
    if (A == B)
    {
        printf("Both Numbers are Equal.");
    }
    else
    {
        if (A > B)
        {
            printf("A is Bigger");
        }
        else
        {
            printf("B is Bigger");
        }
        printf("\nHimanshu Legendary Blader");
    }
}
// Even or Odd using Pointers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, R, *P;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &N);
    P = &N;
    R = *P % 2;
    if (R == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    printf("\nGood Day");
}
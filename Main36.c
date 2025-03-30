// Calculating Factorial Value.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, I;
    long int F = 1;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &N);
    for (I = N; I >= 1; I--)
    {
        F = F * I;
    }
    printf("Factorial Value = %ld", F);
}
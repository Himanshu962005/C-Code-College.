// Factorial Number.
#include <stdio.h>
#include <conio.h>
void fact(int n)
{
    int i;
    long int F = 1;
    for (i = n; i >= 1; i--)
    {
        F = F * i;
    }
    printf("Factorial Value = %ld", F);
}
void main()
{
    int N;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &N);
    fact(N);
    printf("\nGood Day");
}
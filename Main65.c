// Calculating Factorial value of a Number using Pointers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, I, *n;
    long int F = 1;
    system("cls");
    printf("Input a Number = ");
    scanf("%d", &N);
    n = &N;
    for (I = (*N); I >= 1; I--)
    {
        F = F * I;
    }
    printf("Factorial value = %d", F);
}

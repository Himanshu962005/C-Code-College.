// Calculating Factorial value of a Number using Pointers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, I, *n, *i;
    long int F = 1, *f;
    system("cls");
    printf("Input a Number = ");
    scanf("%d", &N);
    n = &N;
    i = &I;
    f = &F;
    for (I = N; I >= 1; I--)
    {
        F = (*f) * (*i);
    }
    printf("Factorial value = %d", F);
}
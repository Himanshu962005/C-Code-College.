// Print Table of a Number using Pointers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, I, M, *n;
    system("cls");
    printf("Input a number to print Table = ");
    scanf("%d", &N);
    n = &N;
    for (I = 1; I <= 10; I++)
    {
        M = (*n) * I;
        printf("\n %d", M);
    }
    printf("\n Good Day");
}
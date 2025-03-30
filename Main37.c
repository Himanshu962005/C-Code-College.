// Printing Fibonacci series.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A, B, C, NT, I;
    system("cls");
    printf("Input Number of Terms to print Fibonacci Series = ");
    scanf("%d", &NT);
    A = 0;
    B = 1;
    printf("%d \t", A);
    printf("%d \t", B);
    for (I = 1; I <= NT - 2; I++)
    {
        C = A + B;
        printf("%d \t", C);
        A = B;
        B = C;
    }
    printf("\nGood Day");
}
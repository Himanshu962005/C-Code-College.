// Swapping of 2 numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A, B, T;
    system("cls");
    printf("Input value for A = ");
    scanf("%d", &A);
    printf("Input value for B = ");
    scanf("%d", &B);
    T = A;
    A = B;
    B = T;
    printf("\nAfter swapping...");
    printf("\nValue of A = %d", A);
    printf("\nValue of B = %d", B);
}
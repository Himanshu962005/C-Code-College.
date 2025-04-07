// Write a C program for swapping of 2 numbers without using 3 variable.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A, B;
    system("cls");
    printf("Input value for A = ");
    scanf("%d", &A);
    printf("Input value for B = ");
    scanf("%d", &B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("\nAfter swapping...");
    printf("\nValue of A = %d", A);
    printf("\nValue of B = %d", B);
}
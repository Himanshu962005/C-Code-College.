// Swapping of two numbers using user defined function.
#include <stdio.h>
#include <conio.h>
void swap(int a, int b) // Formal (Dummy) arguments.
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("\nAfter swapping.....");
    printf("\nValue of A = %d", a);
    printf("\nValue of B = %d", b);
}
void main()
{
    int A, B;
    system("cls");
    printf("Input Value for A = ");
    scanf("%d", &A);
    printf("Input Value of B = ");
    scanf("%d", &B);
    swap(A, B); // Actual (Real) Arguments.
    printf("\nGood Day");
}
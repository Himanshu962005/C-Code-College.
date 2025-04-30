// Function with passing argument, but No return value.
// Sum of two numbers.
#include <stdio.h>
#include <conio.h>
void calc(int a, int b) // Defination Function and // Formal argument or Dummy argument.
{
    int S; // Local variable.
    S = a + b;
    printf("\nSum = %d", S);
}
void main()
{
    int A, B;
    system("cls");
    printf("Input First Number = ");
    scanf("%d", &A);
    printf("Input Second Number = ");
    scanf("%d", &B);
    calc(A, B); // Calling Function and // Actual argument or Real argument.
    printf("\nGood Day");
}
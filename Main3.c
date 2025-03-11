// Calculate Addition, Subtraction, Multiplication and Division.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 7, b = 2, ADD, SUB, MUL;
    float DIV;
    system("cls");
    printf("First Number = %d", a);
    printf("\nSecond Number = %d", b);
    ADD = a + b;
    SUB = a - b;
    MUL = a * b;
    DIV = a / b;
    printf("\nAddition = %d", ADD);
    printf("\nSubtraction = %d", SUB);
    printf("\nMultiplication = %d", MUL);
    printf("\nDivision = %f", DIV);
}
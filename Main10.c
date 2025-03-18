// Input any 2 Number and find their Addition, Subtraction, Multiplication, Division.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, sum, sub, mul;
    float div;
    system("cls");
    printf("Input First Number = ");
    scanf("%d", &a);
    printf("Input Second Number = ");
    scanf("%d", &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    printf("Addition = %d", sum);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\nDivision = %f", div);
}
// Average of three numbers.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a = 9, b = 6, c = 2;
    float avg;
    system("cls");
    printf("First Number = %d", a);
    printf("\nSecond Number = %d", b);
    printf("\nThird Number = %d", c);
    avg = (float)(a + b + c) / 3;
    printf("\nAverage of three numbers = %f", avg);
}
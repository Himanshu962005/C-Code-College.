// Write a C program to input a number and print its table using for loop.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, I, M;
    system("cls");
    printf("Input a number to print table =");
    scanf("%d", &N);
    for (I = 1; I <= 10; I++)
    {
        M = N * I;
        printf("\n%d", M);
    }
    printf("\nGood Day");
}
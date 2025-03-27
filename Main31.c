// Input a number and print its tables.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, i, M;
    system("cls");
    printf("Input a number to print table = ");
    scanf("%d", &N);
    i = 1;
    while (i <= 10)
    {
        M = N * i;
        printf("\n%d ", M);
        i++;
    }
    printf("\nGood Day");
}
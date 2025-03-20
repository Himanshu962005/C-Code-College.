// Testing Even Number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, r;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &n);
    r = n % 2;
    if (r == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    printf("\nHimanshu Legenday Blader");
}
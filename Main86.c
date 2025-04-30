// Test given number is Even or Odd.
#include <stdio.h>
#include <conio.h>
void EVO(int n)
{
    int R;
    R = n % 2;
    if (R == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}
void main()
{
    int N;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &N);
    EVO(N);
    printf("\nGood Day");
}
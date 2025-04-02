// Testing Armstrong Numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, R, S = 0, T;
    system("cls");
    printf("Input a Multi-digit Number = ");
    scanf("%d", &N);
    T = N;
    while (N > 0)
    {
        R = N % 10;
        S = S + R * R * R;
        N = N / 10;
    }
    if (S == T)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
    printf("\nGood Day");
}
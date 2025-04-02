// Reverse Numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, R, REV = 0;
    system("cls");
    printf("Input a Multi-digit number = ");
    scanf("%d", &N);
    while (N > 0)
    {
        R = N % 10;
        REV = REV * 10 + R;
        N = N / 10;
    }
    printf("Reverse Number = %d", REV);
}
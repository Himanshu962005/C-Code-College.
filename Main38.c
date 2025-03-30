// Sum of all digits of given number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, R, S = 0;
    s6ystem("cls");
    printf("Input a Multi-digit number = ");
    scanf("%d", &N);
    while (N > 0)
    {
        R = N % 10;
        S = S + R;
        N = N / 10;
    }
    printf("Sum of all digits = %d", S);
}
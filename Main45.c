// Calculating Square-Root.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int N;
    float Sqrt;
    system("cls");
BCA:
    printf("Input a number = ");
    scanf("%d", &N);
    if (N < 0)
    {
        printf("Square-root of negative number is not possible. Try again.\n\n");
        goto BCA;
    }
    Sqrt = sqrt(N);
    printf("Square-root = %f", Sqrt);
}
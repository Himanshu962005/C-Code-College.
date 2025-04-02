// Testing Palindrome Numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, R, REV = 0, T;
    system("cls");
    printf("Input a Multi-digit number = ");
    scanf("%d", &N);
    T = N;
    while (T > 0)
    {
        R = T % 10;
        REV = REV * 10 + R;
        T = T / 10;
    }
    if (REV == N)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
    printf("\nGood Day");
}
// Testing Armstrong Numbers using user-defined function.
#include <Stdio.h>
#include <conio.h>
void ARM(n)
{
    int R, S = 0, T;
    T = n;
    while (n > 0)
    {
        R = n % 10;
        S = S + R * R * R;
        n = n / 10;
    }
    if (S == T)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
}
void main()
{
    int N;
    system("cls");
    printf("Input a Multi-digit Number = ");
    scanf("%d", &N);
    ARM(N);
    printf("\nGood Day");
}
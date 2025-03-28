// Prime Numbers Testing using for loop.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, D, FLAG = 0;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &N);
    for (D = 2; D <= N - 1; D++)
    {
        if (N % D == 0)
        {
            FLAG = 1;
            break;
        }
    }
    if (FLAG == 0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    printf("\nGood Day");
}
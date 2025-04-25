// Prime Numbers using Pointers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N, D, FLAG = 0, *P;
    system("cls");
    printf("Input a number = ");
    scanf("%d", &N);
    P = &N;
    for (D = 2; D <= *P - 1; D++)
    {
        if (*P % D == 0)
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
    printf("\n Good Day");
}
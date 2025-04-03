// Do While Example.
#include <stdio.h>
#include <conio.h>
void main()
{
    int I, S = 0;
    system("cls");
    printf("Natural Number Series = ");
    I = 1;
    do
    {
        printf("\n %d", I);
        S = S + I;
        I++;
    } while (I <= 10);
    printf("\n Sum = %d", S);
}
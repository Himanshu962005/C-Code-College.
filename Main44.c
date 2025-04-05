// Continue Example.
#include <stdio.h>
#include <conio.h>
void main()
{
    int I;
    system("cls");
    printf("Example of continue statement = ");
    for (I = 1; I <= 10; I++)
    {
        if (I == 8)
        {
            continue;
        }
        printf("\n %d", I);
    }
    printf("\n Forward Jump ");
}
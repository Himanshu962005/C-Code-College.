// Print Table of 9.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    system("cls");
    printf("Table of 2 = ");
    i = 9;
    while (i <= 90)
    {
        printf("\n%d", i);
        i = i + 9;
    }
    printf("\nGood Day");
}
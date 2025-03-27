// Print initial 10 natural numbers and find there sum.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, s = 0;
    system("cls");
    printf("Natural numbers series = ");
    i = 1;
    while (i <= 10)
    {
        printf("\n%d ", i);
        s = s + i;
        i++;
    }
    printf("\nSum = %d", s);
}
// Print initial 10 natural numbers and find their sum using for loop.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, s = 0;
    system("cls");
    printf("Natural numbers series = ");
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i);
        s = s + i;
    }
    printf("\nSum = %d", s);
}
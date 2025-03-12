#include <stdio.h>
#include <conio.h>
void main()
{
    int p = 992, t = 4;
    float r = 7.3, si;
    system("cls");
    printf("Principal Amount = %d", p);
    printf("\nRate of Interest = %f", r);
    printf("\nTime = %d", t);
    si = p * t * r / 100;
    printf("\nSimple Interest = %f", si);
}
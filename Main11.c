// Input Principal Amount, Rate of Interest, Time and calculate Simple Interest.
#include <stdio.h>
#include <conio.h>
void main()
{
    int p, t;
    float r, si;
    system("cls");
    printf("Enter Principal Amount = ");
    scanf("%d", &p);
    printf("Enter Rate of Interest= ");
    scanf("%f", &r);
    printf("Enter Time = ");
    scanf("%d", &t);
    si = p * r * t / 100;
    printf("Simple Interest = %f", si);
}
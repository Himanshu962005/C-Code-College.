// Simple Interest with return a value.
#include <stdio.h>
#include <conio.h>
float simple(int p, float r, int t)
{
    float si;
    si = (p * r * t) / 100;
    return (si);
}
void main()
{
    int P, T;
    float R, SIM;
    system("cls");
    printf("Input principal amount = ");
    scanf("%d", &P);
    printf("Input Rate of Interest = ");
    scanf("%f", &R);
    printf("Input Time = ");
    scanf("%d", &T);
    SIM = simple(P, R, T);
    printf("Simple Interest = %f", SIM);
    printf("\nGood Day");
}
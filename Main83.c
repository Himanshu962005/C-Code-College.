// Calculate simple interest using user-defined function.
#include <stdio.h>
#include <conio.h>
void Simp(int p, float r, int t)
{
    float SI;
    SI = p * r * t / 100;
    printf("\nSimple Interest = %f", SI);
}
void main()
{
    int P, T;
    float R;
    system("cls");
    printf("Input a Principal Amount = ");
    scanf("%d", &P);
    printf("Input a Rate of interest = ");
    scanf("%f", &R);
    printf("Input a Time = ");
    scanf("%d", &T);
    Simp(P, R, T);
    printf("\nGood Day");
}
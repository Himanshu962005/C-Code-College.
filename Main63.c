// Find Simple Interest using Pointer.
#include <stdio.h>
#include <conio.h>
void main()
{
    int P, T, *p, *t;
    float R, SI, *r;
    system("cls");
    printf("Input Principal Amount = ");
    scanf("%d", &P);
    printf("Input Rate of Interest = ");
    scanf("%f", &R);
    printf("Input Time = ");
    scanf("%d", &T);
    p = &P;
    t = &T;
    r = &R;
    SI = (*p) * (*r) * (*t) / 100;
    printf("Simple Interest = %f", SI);
}
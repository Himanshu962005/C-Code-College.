// Sum using pointers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A, B, S, *P, *Q;
    system("cls");
    printf("Input First Number = ");
    scanf("%d", &A);
    printf("Input Second Number = ");
    scanf("%d", &B);
    P = &A;
    Q = &B;
    S = (*P) + (*Q);
    printf("Sum = %d", S);
}
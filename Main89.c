// Function with passing argument with return a value.
#include <stdio.h>
#include <conio.h>
int calc(int p, int q)
{
    int s;
    s = p + q;
    return (s);
}
void main()
{
    int A, B, ANS;
    system("cls");
    printf("Input First Numeber = ");
    scanf("%d", &A);
    printf("Input Second Number = ");
    scanf("%d", &B);
    ANS = calc(A, B);
    printf("Sum = %d", ANS);
    printf("\nGood Day ");
}
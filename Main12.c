// Input marks of 9 subjects at calculate total and percentage.
#include <stdio.h>
#include <conio.h>
void main()
{
    int p, c, b, m, e, h, g, a, s, t;
    float per;
    system("cls");
    printf("Input marks for Physics = ");
    scanf("%d", &p);
    printf("Input marks for Chemistry = ");
    scanf("%d", &c);
    printf("Input marks for Biology = ");
    scanf("%d", &b);
    printf("Input marks for Mathematics = ");
    scanf("%d", &m);
    printf("Input marks for English = ");
    scanf("%d", &e);
    printf("Input marks for Hindi = ");
    scanf("%d", &h);
    printf("Input marks for Geography = ");
    scanf("%d", &g);
    printf("Input = marks for Accountancy = ");
    scanf("%d", &a);
    printf("Input marks for Sanskrit = ");
    scanf("%d", &s);
    t = p + c + b + m + e + h + g + a + s;
    per = (float)t * 100 / 900;
    printf("\nTotal marks = %d", t);
    printf("\nPercentage = %f", per);
}
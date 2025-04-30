// Print Tables of given number.
#include <stdio.h>
#include <conio.h>
void Tab(int n)
{
    int i, M;
    for (i = 1; i <= 10; i++)
    {
        M = n * i;
        printf("\n%d", M);
    }
}
void main()
{
    int N;
    system("cls");
    printf("Input a number to print table = ");
    scanf("%d", &N);
    Tab(N);
    printf("\nGood Day");
    getch();
}
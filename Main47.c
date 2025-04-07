// Example of 1-D Array.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N[10], I, S = 0;
    system("cls");
    printf("Input any 10 numbers for an array =\n");
    for (I = 0; I < 9; I++)
    {
        scanf("%d", &N[I]);
    }
    printf("\n Array Elements = ");
    for (I = 0; I < 9; I++)
    {
        printf("%d ", N[I]);
        S = S + N[I]; // Calculating sum
    }
    printf("\n Sum of Array Elements = %d", S);
}
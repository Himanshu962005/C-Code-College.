// Bubble sort.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N[10], I, T, P;
    system("cls");
    printf("Input any 10 numbers for an array =\n");
    for (I = 0; I <= 9; I++)
    {
        scanf("%d", &N[I]);
    }
    for (P = 0; P <= 8; P++)
    {
        for (I = 0; I <= 8 - P; I++)
        {
            if (N[I] > N[I + 1])
            {
                T = N[I];
                N[I] = N[I + 1];
                N[I + 1] = T;
            }
        }
    }
    printf("\nArray in ascending order = ");
    for (I = 0; I <= 9; I++)
    {
        printf("%d ", N[I]);
    }
    printf("\nBubble sort");
}
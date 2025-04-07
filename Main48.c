// Input any 10 numbers for an array and prints its elements in reverse order.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N[10], I;
    system("cls");
    printf("Input any 10 numbers for an array =\n");
    for (I = 0; I < 10; I++)
    {
        scanf("%d", &N[I]);
    }
    printf("\nArray in reverse order =\n");
    for (I = 9; I >= 0; I--)
    {
        printf("%d\n", N[I]);
    }
}
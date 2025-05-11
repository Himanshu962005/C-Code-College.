// Create a three-dimensional array and print the address of its elements in increasing order.
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[2][3][4];
    system("cls");
    for (int I = 0; I < 2; I++)
    {
        for (int J = 0; J < 3; J++)
        {
            for (int K = 0; K < 4; K++)
            {
                printf("%u ", &arr[I][J][K]);
            }
        }
    }
    getch();
}
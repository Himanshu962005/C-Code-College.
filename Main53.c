// Matrix 3x3 Example.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A[3][3] = {{2, 6, 3}, {9, 4, 6}, {5, 8, 7}};
    int R, C;
    system("cls");
    printf("Matrix A of size 3x3 = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            printf("%d ", A[R][C]);
        }
        printf("\n");
    }
}
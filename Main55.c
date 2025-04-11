// Transpose of Matrix 3x3.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A[3][3], R, C;
    system("cls");
    printf("Input Elements for Matrix A 3x3 = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            scanf("%d", &A[R][C]);
        }
    }
    printf("\nMatrix A = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            printf("%4d", A[R][C]);
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix A = \n");
    for (C = 0; C <= 2; C++)
    {
        for (R = 0; R <= 2; R++)
        {
            printf("%4d", A[R][C]);
        }
        printf("\n");
    }
    printf("\n Good Day");
}
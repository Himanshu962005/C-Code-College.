// Addition of 2 Matrices.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A[3][3], B[3][3], S[3][3], R, C;
    system("cls");
    printf("Input elements of matrix A = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            scanf("%d", &A[R][C]);
        }
    }
    printf("Input elements of matrix B = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            scanf("%d", &B[R][C]);
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
    printf("\nMatrix B = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            printf("%4d", B[R][C]);
        }
        printf("\n");
    }
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            S[R][C] = A[R][C] + B[R][C];
        }
    }
    printf("Sum of Both Matrices = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            printf("%4d", S[R][C]);
        }
        printf("\n");
    }
    printf("\nGood Day");
}
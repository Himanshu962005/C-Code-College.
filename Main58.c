// Multiplication of 2 Matrices.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A[3][3], B[3][3], M[3][3], R, C, K;
    system("cls");
    printf("Input Elements of Matrix A = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            scanf("%d", &A[R][C]);
        }
    }
    printf("Input Elements of Matrix B = \n");
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
            M[R][C] = 0;
            for (K = 0; K <= 2; K++)
            {
                M[R][C] = M[R][C] + A[R][K] * B[K][C];
            }
        }
    }
    printf("\nMultiplication of Both Matrices = \n");
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            printf("%4d", M[R][C]);
        }
        printf("\n");
    }
    printf("\nGood Day");
}
// Input 9 elements for a matrix of size 3x3. Print its forward and backward diagonal elements.
#include <stdio.h>
#include <conio.h>
void main()
{
    int A[3][3], R, C;
    system("cls");
    printf("Input 9 Elements for Matrix A (3x3) =\n");
    for (R = 0; R < 3; R++)
    {
        for (C = 0; C < 3; C++)
        {
            scanf("%d", &A[R][C]);
        }
    }
    printf("\nMatrix A = \n");
    for (R = 0; R < 3; R++)
    {
        for (C = 0; C < 3; C++)
        {
            printf("%4d", A[R][C]);
        }
        printf("\n");
    }
    printf("\nForward Diagonal Elements = ");
    for (R = 0; R < 3; R++)
    {
        printf("%4d", A[R][R]);
    }
    printf("\nBackward Diagonal Elements = ");
    for (R = 0; R < 3; R++)
    {
        printf("%4d", A[R][2 - R]);
    }
    printf("\n\nHave a Good Day!");
}
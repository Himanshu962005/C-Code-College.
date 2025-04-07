// Linear Search.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N[10], I, SN, CNT = 0;
    system("cls");
    printf("Input any 10 number for an array =\n");
    for (I = 0; I <= 9; I++)
    {
        scanf("%d", &N[I]);
    }
    printf("Input a number to be searched in array = ");
    scanf("%d", &SN);
    for (I = 0; I <= 9; I++)
    {
        if (SN == N[I])
        {
            CNT++;
        }
    }
    if (CNT == 0)
    {
        printf("Number not found in array =");
    }
    else
    {
        printf("Number found in array %d times", CNT);
    }
    printf("\nGood Day");
}
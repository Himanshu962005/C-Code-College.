// Input any two strings and check both are equal or not using a Library function.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char STR[10], VTR[10];
    system("cls");
    printf("Input First String = ");
    scanf("%s", STR);
    printf("Input Second String = ");
    scanf("%s", VTR);
    if (strcmp(STR, VTR) == 0)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Both are not equal");
    }
    printf("\nGood Day");
}
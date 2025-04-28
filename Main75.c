// Input a string and print its character one my one.
#include <stdio.h>
#include <conio.h>
void main()
{
    char NAME[10];
    int I;
    system("cls");
    printf("Input a string = ");
    scanf("%s", NAME);
    printf("Its characters --- ");
    for (I = 0; NAME[I] != '\0'; I++)
    {
        printf("\n%c", NAME[I]);
    }
    printf("\n\nGood Day");
}
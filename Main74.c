// String Initialization.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char NAME[10];
    int L;
    system("cls");
    printf("Input a string = ");
    scanf("%s", NAME);
    printf("Given string = %s", NAME);
    L = strlen(NAME);
    printf("\n\nLength of string = %d", L);
}
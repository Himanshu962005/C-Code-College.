// Input a string and find its Reverse string using a Library function.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char STR[10];
    system("cls");
    printf("Input a string = ");
    scanf("%s", &STR);
    strrev(STR);
    printf("Reverse string = %s", STR);
}
// Input your name and surname and find name using Library function.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char NAME[40], SNAME[20];
    system("cls");
    printf("Input your name = ");
    scanf("%s", &NAME);
    printf("Input your surname = ");
    scanf("%s", &SNAME);
    strcat(NAME, SNAME);
    printf("Your Full Name = %s", NAME);
}
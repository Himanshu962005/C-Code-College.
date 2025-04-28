// Upper to Lower.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CH;
    system("cls");
    printf("Input a character = ");
    scanf("%c", &CH);
    CH = CH + 32;
    printf("Its Equivalent character in lower case = %c", CH);
}
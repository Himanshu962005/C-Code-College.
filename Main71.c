// Lower to Upper.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CH;
    system("cls");
    printf("Input a character in lower case = ");
    scanf("%c", &CH);
    CH = CH - 32;
    printf("Its Equivalent character in upper case = %c", CH);
}
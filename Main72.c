// Testing Numerical, UC Letter, LC Letter or Special Symbol.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CH;
    system("cls");
    printf("Input a symbol = ");
    scanf("%c", &CH);
    if (CH >= 48 && CH <= 57)
    {
        printf("Numerical Value");
    }
    else if (CH >= 65 && CH <= 90)
    {
        printf("Uppercase Letter");
    }
    else if (CH >= 97 && CH <= 122)
    {
        printf("Lowercase Letter");
    }
    else
    {
        printf("Special Symbol");
    }
    printf("\nGood Day");
}
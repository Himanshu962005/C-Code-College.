// String Length.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char STR[10];
    int L;
    system("cls");
    printf("Input a string = ");
    scanf("%s", &STR);
    L = strlen(STR);
    printf("Length of the string = %d", L);
}

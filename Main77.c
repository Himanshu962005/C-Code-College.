// String Copy.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char STR[10], VTR[10];
    system("cls");
    printf("Input a string = ");
    scanf("%s", &STR);
    strcpy(VTR, STR);
    printf("\n Copied string = %s", VTR);
}

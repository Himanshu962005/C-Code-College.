// C program to finding city.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CT;
    system("cls");
    printf("Input a city name = ");
    scanf("%c", &CT);
    switch (CT)
    {
    case 'A':
    case 'a':
        printf("Ahmedabad");
        break;
    case 'B':
    case 'b':
        printf("Bangalore");
        break;
    case 'C':
    case 'c':
        printf("Chennai");
        break;
    case 'D':
    case 'd':
        printf("Delhi");
        break;
    case 'R':
    case 'r':
        printf("Raipur");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    printf("\nGood Day");
}
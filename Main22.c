// Input a character among A, B, C, D, and R as initial of the city and print appropriate city name.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CT;
    system("cls");
    printf("Input a character = ");
    scanf("%c", &CT);
    if (CT == 'A' || CT == 'a')
    {
        printf("Ahmedabad");
    }
    else if (CT == 'B' || CT == 'b')
    {
        printf("Bangalore");
    }
    else if (CT == 'C' || CT == 'c')
    {
        printf("Chennai");
    }
    else if (CT == 'D' || CT == 'd')
    {
        printf("Delhi");
    }
    else if (CT == 'R' || CT == 'r')
    {
        printf("Raipur");
    }
    else
    {
        printf("Invalid Input");
    }
    printf("\nGreen City - Clean City");
}
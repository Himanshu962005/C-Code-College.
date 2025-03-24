// Input Number of Population and print appropriate residential area.
#include <stdio.h>
#include <conio.h>
void main()
{
    long int pop;
    system("cls");
    printf("Enter the population = ");
    scanf("%ld", &pop);
    if (pop <= 3000)
    {
        printf("Residential Area: Village");
    }
    else
    {
        if (pop > 3000 && pop <= 10000)
        {
            printf("Residential Area: Town");
        }
        else
        {
            if (pop > 10000 && pop <= 30000)
            {
                printf("Residential Area: City");
            }
            else
            {
                printf("Residential Area: Metro");
            }
        }
    }
    printf("\nBest of Luck");
}
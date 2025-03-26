// Number Equivalent in Words (1-5).
#include <stdio.h>
#include <conio.h>
void main()
{
    int N;
    system("cls");
    printf("Input a number between 1 and 5 = ");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    default:
        printf("Invalid Input");
    }
    printf("\nGood Day");
}
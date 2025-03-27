// Input a Character and test its is vowel or consonant.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CH;
    system("cls");
    printf("Enter a Character = ");
    scanf("%c", &CH);
    switch (CH)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }
    printf("\nGood Day");
}
// Vowel & Consonant.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CH;
    system("cls");
    printf("Input a character = ");
    scanf("%c", &CH);
    if (CH == 'A' || CH == 'a' || CH == 'E' || CH == 'e' || CH == 'I' || CH == 'i' || CH == 'O' || CH == 'o' || CH == 'U' || CH == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    printf("\nGood Day");
}
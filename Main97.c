// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take 'm' and 'n' as the start and ending position for slice.
#include <stdio.h>
#include <conio.h>
char *slice(char str[], int m, int n)
{
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}
void main()
{
    char str[] = " Himanshu Legendary Coder";
    system("cls");
    printf("%s", slice(str, 1, 24));
    getch();
}
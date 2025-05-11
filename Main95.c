// Write a program to print the value of a variable i by using "pointer to pointer" type of variable.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 2;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    system("cls");
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *ptr1);
    printf("The value of i is %d\n", **ptr2);
    getch();
}
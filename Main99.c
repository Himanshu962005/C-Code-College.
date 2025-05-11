// Write a program to modify a file containing an integer to double its value.
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *ptr;
    int num;
    system("cls");
    ptr = fopen("int.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", 2 * num);
    fclose(ptr);
    getch();
}
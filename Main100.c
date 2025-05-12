// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15)? Attempt problem using calloc().
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 10;
    int *ptr;
    system("cls");
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("The Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("The Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    getch();
    return 0;
}
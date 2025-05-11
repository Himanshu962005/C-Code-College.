// Write a structure capable of storing date. Write a function to compare those dates? Solve problem for time using 'ypedef' keyword.
#include <stdio.h>
#include <conio.h>
typedef struct Date
{
    int MM;
    int DD;
    int YYYY;
} DT;
int compare(DT d1, DT d2)
{
    // If d1 is in the future, return 1.
    if ((d1.YYYY == d2.YYYY) && (d1.MM == d2.MM) && (d1.DD == d2.DD))
    {
        return 0;
    }
    if (d1.YYYY > d2.YYYY)
    {
        return 1;
    }
    if (d1.YYYY < d2.YYYY)
    {
        return -1;
    }
    else if (d1.MM > d2.MM)
    {
        return 1;
    }
    else if (d1.MM < d2.MM)
    {
        return -1;
    }
    else if (d1.DD > d2.DD)
    {
        return 1;
    }
    else if (d1.DD < d2.DD)
    {
        return -1;
    }
}
int main()
{
    DT d1 = {9, 6, 2025};
    DT d2 = {9, 6, 2005};
    system("cls");
    printf("%d", compare(d1, d2));
    getch();
    return 0;
}

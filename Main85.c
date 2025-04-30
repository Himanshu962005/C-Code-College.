// Calculate the area and circumference of the circle using user-defined function.
#include <stdio.h>
#include <conio.h>
void Are(int r)
{
    float AR;
    AR = (float)22 / 7 * r * r;
    printf("Area of a circle = %f", AR);
}
void Circum(int r)
{
    float CF;
    CF = (float)2 * 22 / 7 * r;
    printf("\nCircumference of circle = %f", CF);
}
void main()
{
    int R;
    system("cls");
    printf("Radius of circle = ");
    scanf("%d", &R);
    Are(R);
    Circum(R);
    printf("\nGood Day");
}

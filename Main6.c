// Area of the right-angled triangle.
#include <stdio.h>
#include <conio.h>
void main ()
{
    int b=5, h=7;
    float ar;
    system("cls");
    printf ("Enter the base of the triangle = %d", b);
    printf ("\nEnter the height of the triangle = %d", h);
    ar = (float)(b*h)/2;
    printf ("\nThe area of the right-angled triangle = %f", ar);
}
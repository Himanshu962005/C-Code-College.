// Area & Volume.
#include <stdio.h>
#include <conio.h>
void calculateRoom(int l, int w, int h)
{
    int ar;
    int vol;
    ar = l * w;
    vol = l * w * h;
    printf("\n Area of room = %d", ar);
    printf("\n Volume of room = %d", vol);
}
void main()
{
    int L, W, H;
    system("cls");
    printf("Input Length of room = ");
    scanf("%d", &L);
    printf("Input Width of room = ");
    scanf("%d", &W);
    printf("Input Height of room = ");
    scanf("%d", &H);
    calculateRoom(L, W, H);
    printf("\nGood Day");
}
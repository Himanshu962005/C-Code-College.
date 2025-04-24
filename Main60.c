// Pointer.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N = 999, *PTR;
    system("cls");
    printf("\n Value of N = %d", N);
    printf("\n Memory Address of N = %u", &N);
    PTR = &N; // "PTR" points to "N".
    printf("\n Memory Address of N = %u", PTR);
    printf("\n Value of N = %d", *PTR);
}
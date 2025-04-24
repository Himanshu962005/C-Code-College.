// Pointer to Pointer.
#include <stdio.h>
#include <conio.h>
void main()
{
    int N = 999, *PTR, **PP;
    system("cls");
    printf("\n Value of N = %d", N);
    printf("\n Memory Address of N = %u", &N);
    PTR = &N; // "PTR" points to "N"
    printf("\n Memory Address of N = %u", PTR);
    printf("\n Value of N = %d", *PTR);
    printf("\n\n Memory Address of PTR = %u", &PTR);
    PP = &PTR;
    printf("\n Memory Address of PTR = %u", PP);
    printf("\n Value of N = %d", **PP);
}
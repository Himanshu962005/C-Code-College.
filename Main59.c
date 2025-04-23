// Memory Address.
#include <stdio.h>
#include <conio.h>
void main()
{
    char CH = 'Y';
    short int NUM = 999;
    float PER = 79.28;
    system("cls");
    printf("\n Value of CH = %c", CH);
    printf("\n Memory Address of CH = %u", &CH);
    printf("\n Number of Bytes occupied by CH = %d", sizeof(CH));
    printf("\n\n Value of NUM = %d", NUM);
    printf("\n Memory Address of NUM = %u", &NUM);
    printf("\n Number of Bytes occupied by NUM = %d", sizeof(NUM));
    printf("\n\n Value of PER = %f", PER);
    printf("\n Memory Address of PER = %u", &PER);
    printf("\n Number of Bytes occupied by PER = %d", sizeof(PER));
}
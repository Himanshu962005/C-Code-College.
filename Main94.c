/* What will the following line produce in a C program:
   int a = 4;
   printf("%d %d %d \n", a, ++a, a++);
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 4;
    system("cls");
    printf("%d %d %d \n", a, ++a, a++);
    getch();
}
/* Answer 4 5 5
   Ansser 6 6 4
*/
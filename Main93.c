// Example of a structure.
#include <stdio.h>
#include <conio.h>
struct STUD
{
    int Rollno;
    char NAME[10];
    float PER;
};
void main()
{
    struct STUD x = {962005, "Himanshu", 96.25};
    system("cls");
    printf("\nMy Roll Number = %d", x.Rollno);
    printf("\nMy Name = %s", x.NAME);
    printf("\nPercentage = %f", x.PER);
}
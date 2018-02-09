#include <stdio.h>
void main()
{
    int num,a =20,b=40;
    clrscr();
    printf("Print Odd Numbers in a given range a to b:\n");
    for (num = a; num <= b; num++)
        {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }
                getch();
}

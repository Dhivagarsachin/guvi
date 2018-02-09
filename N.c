#include<stdio.h>
#include<conio.h>
void main()
{
        longint sum=0,p,n;
        clrscr();
        printf("\n Please Give The Value of N:  ");
        scanf("%ld",&n);
        for(p=1;p<=n;p++)
        {
            printf("\n 5 * %ld = %ld",p,5*p);
        }
        getch();
}



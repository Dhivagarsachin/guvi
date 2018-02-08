#include<stdio.h>
int main()
{
int a,b,c,rev=0;
scanf(" %d",&a);
printf("\n enter the num ");
while(a>0)
{
c=a%10;
rev=rev*10+c;
a=a/10;
}
if(b==rev)
printf("\n given number is palindrome ");
}
else
{
printf("\n given num is not palindrome");
}
return 0;
}

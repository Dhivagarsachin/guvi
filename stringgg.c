#include<stdio.h>
#include<conio.h>
void main()
{
char g[30];
int i,flag=0,n=0;
clrscr();
printf("enter the string:");
scanf("%s",g);
for(i=0;g[i]!='\0';i++)
{
if(s[i]=='0'||g[i]=='1'||g[i]=='2'||g[i]=='3'||g[i]=='5'||g[i]=='6'||g[i]=='7'||g[i]=='8'||g[i]=='9')
{
flag=flag+1;
}
}
if(flag==0)
printf("given string not contains numbers");
else
printf("given string contains numbers");
getch();

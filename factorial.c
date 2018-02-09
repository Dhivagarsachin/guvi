#include<stdio.h>
int main(){
       int n=1,numbr;
       long int fact=1;

       printf("Enter a number:     ");
       scanf("%d",&numbr);
       while(n<=numbr)
       {
       fact=fact*n;
       n++;
       }
       printf("\n Factorial of %d is: %ld",numbr,fact);
       return 0;
  }

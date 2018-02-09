#include<stdio.h> 
int main()
{
           int r1,r2,rem,i;
           printf("   Give the First number for the Range :   \n");
           scanf("%d",&r1);
           printf("   Give the Final number for the Range :   \n");
           scanf("%d",&r2);
           printf("\n The Even numbers between %d and %d are ",r1,r2); 
           for(i=r1; i<=r2; ++i){
               rem = i % 2;
               if(rem == 0)
               printf("\n  %d",i);
           }
    return 0; 
    } 

 

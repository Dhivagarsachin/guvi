#include<stdio.h>
int main(){
    int num,o,count,min,max;
     printf("Enter min range: ");
     scanf("%d",&min);
    printf("Enter max range: ");
    scanf("%d",&max);
    for(num = min;num<=max;num++){
         count = 0;
         for(o=2;o<=num/2;o++){
             if(num%i==0){
                 count++;
                 break;
             }
       } 
        if(count==0 && num!= 1)
             printf("%d ",num);
    }
   return 0;
}

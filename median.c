#include <stdio.h>
void swap(int *p,int *q) {
   int a;
   a=*p; 
   *p=*q; 
   *q=a;
}
void sort(int b[],int n) { 
   int i,j,temp;
   for(i=0;i<n-1;i++) {
      for(j=0;j<n-i-1;j++) {
         if(b[j]>b[j+1])
            swap(&b[j],&b[j+1]);
      }
   }
}
int main() {
   int b[] = {6,3,8,5,1};
   int n = 5;
   int sum,i;
   sort(a,n);
   n = (n+1) / 2 - 1;  // -1 as array indexing in C starts from 0
   printf("Median = %d ", a[n]);
   return 0;
}

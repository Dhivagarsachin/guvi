#include<stdio.h>
int main(){
  int n,i,j,k,sum=0,a[100],p,c=0;
  scanf("%d,%d\n",&n,&p);
  for(i=0;i<n;i++)
  {
    scanf("%d,",&a[i]);
  }
  for (i = 0; i < n; i++) {
      for (j = i + 1; j < n;) {
         if (a[j] == a[i]) {
            for (k = j; k < n; k++) {
               a[k] = a[k + 1];
            }
            n--;
         } else
            j++;
      }
   }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      for(k=j+1;k<n;k++)
      {
        sum=a[i]+a[j]+a[k];
        if(sum%p==0)
          c++;
        sum=0;
      }
    }
  }
  printf("%d",c);
  return 0;
}

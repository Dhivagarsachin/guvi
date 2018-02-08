#include<stdio.h>
int main()
{
  int pow,num,j=1;
  long int sum=1;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  printf("\nEnter power: ");
  scanf("%d",&pow);
  while(i<=pow)
  {
            sum=sum*num;
            j++;
  }
  printf("\n%d to the power %d is: %ld",num,pow,sum);
  return 0;
}

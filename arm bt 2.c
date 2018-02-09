#include <stdio.h>
int main()
{
  int n1, n2, p, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(i=n1+1; p<n2; ++p)
  {
      temp=p;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(p==num)
      {
          printf("%d ",p);
      }
  }
  return 0;
}

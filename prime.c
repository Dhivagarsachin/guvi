#include<stdio.h>
int main()
{
   int b, a = 3, count, c;
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&b);
   if ( b >= 1 )
   {
      printf("First %d prime numbers are :\n",b);
      printf("2\n");
   }
   for ( count = 2 ; count <= b ;  )
   {
      for ( c = 2 ; c <= a - 1 ; c++ )
      {
         if ( a%c == 0 )
            break;
      }
      if ( c == a )
      {
         printf("%d\n", a);
         count++;
      }
      a++;
   }
   return 0;
}

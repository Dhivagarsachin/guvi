#include <stdio.h>
int main()
{
  int array[100], maximum, siz, c, location = 1;
  printf("Enter the number of elements in array\n");
  scanf("%d", &siz);
  printf("Enter %d integers\n", siz);
  for (c = 0; c < siz; c++)
    scanf("%d", &array[c]);
  maximum = array[0];
  for (c = 1; c < siz; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}

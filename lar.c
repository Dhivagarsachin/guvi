#include <stdio.h> 
int main()
{
        int array[50], siz, i, largest;
        printf("\n Enter the size of the array: ");
	scanf("%d", &siz);
        printf("\n Enter %d elements of  the array: ", size);
        for (i = 0; i < siz; i++)
		scanf("%d", &array[i]);
        largest = array[0];
        for (i = 1; i < siz; i++) 
        {
		if (largest < array[i])
			largest = array[i];
	}
        printf("\n largest element present in the given array is : %d", largest);
        return 0;
}

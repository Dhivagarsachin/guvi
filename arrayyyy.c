#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size;
    int h, j, temp;
    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);
    /* Input elements in array */
    printf("Enter elements in array: ");
    for(h=0; h<size; h++)
    {
        scanf("%d", &arr[h]);
    }
    for(h=0; h<size; h++)
    {
        /* 
         * Place currently selected element array[i]
         * to its correct place.
         */
        for(j=h+1; j<size; j++)
        {
            /* 
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(arr[h] > arr[j])
            {
                temp     = arr[h];
                arr[h] = arr[j];
                arr[j] = temp;
            }
        }
    }
    /* Print the sorted array */
    printf("\nElements of array in ascending order: ");
    for(h=0; h<size; h++)
    {
        printf("%d\t", arr[h]);
    }
    return 0;
}

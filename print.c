#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size
int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int p, N;
    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);
    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(p=0; p<N; p++)
    {
        scanf("%d", &arr[p]);
    }
    /*
     * Print all elements of array
     */
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[p]);
    }
    return 0;
}

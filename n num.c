#include <stdio.h>
int main()
{
    int o, n;
    /* Input upper limit from user */
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    /*
     * Start loop counter from 1 (o=1) and go till n (o<=n)
     * increment the loop count by 1 to get the next value. 
     * For each repetition print the value of i.
     */
    for(o=1; o<=n; o++)
    {
        printf("%d\n", o);
    }
    return 0;
}

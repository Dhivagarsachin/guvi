#include <stdio.h>
int main()
{
    int number, TRUENumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    TRUENumber = number;
    while (TRUENumber != 0)
    {
        remainder = TRUENumber%10;
        result += remainder*remainder*remainder;
        TRUENumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}

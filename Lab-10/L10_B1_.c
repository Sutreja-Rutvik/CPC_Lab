// Check whether the given number is perfect or not.

#include <stdio.h>
void main()
{
    int n, i = 1, fact = 0;

    printf("Enter Number : ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            fact = fact + i;
        }
        i++;
    }
    if (fact == n)
    {
        printf("Given Number is Perfect Number ");
    }
    else
    {
        printf("Not Perfect");
    }
}

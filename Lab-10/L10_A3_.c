//  Find whether the given number is prime or not.

#include <stdio.h>
void main()
{
    int n, i = 2, fact, count = 0;
    printf("Enter Number : ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
        
        i++;
    }

    if (count == 0)
    {
        printf("Given Number is Prime Number ");
    }
    else{
        printf("Not Prime");
    }
}
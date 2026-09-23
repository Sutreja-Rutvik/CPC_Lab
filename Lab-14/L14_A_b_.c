// Count number of positive or negative number from an array of n numbers.

#include <stdio.h>
void main()
{
    int n = 5, i, positive = 0, negative = 0;

    /*printf("Enter how many number you want to enter : ");
    scanf("%d", &n);*/

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the Number a[%d] : ", i);
        scanf("%d", &a[i]);

        if (a[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }

    printf("\nPositive numbers = %d", positive);
    printf("\nNegative numbers = %d", negative);
}
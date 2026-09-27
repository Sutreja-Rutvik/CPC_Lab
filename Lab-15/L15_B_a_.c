// Delete all duplicate elements from an array.

#include <stdio.h>
void main()
{
    int n, i, j, k;
    printf("Enter How many number you want to enter : ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
// Reverse elements of an array without using second array.

#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter How many Number you want to enter : ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("In reverse Order \n");
    
    for (i=n-1;i>=0;i--)
    {
        printf(" a[%d] : %d \n",i,a[i]);
    }
    
}
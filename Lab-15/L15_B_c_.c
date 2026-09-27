//  Swap first element with last, second to second last and so on.

#include<stdio.h>
void main()
{
    int n,i,temp;
    printf("Enter How many Number you want to enter : ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (i=0;i<n;i++)
    {
        temp=a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}
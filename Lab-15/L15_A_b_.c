// Count total number of negative elements in array.

#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter How many NUmber you want to enter : ");
    scanf("%d",&n);
    int a[n];
    
    for (i=0;i<n;i++)
    {
        printf("Enter the a[%d] : ",i);
        scanf("%d",&a[i]);

        if (a[i]<0)
        {
            count++;
        }
    }
    
    printf("Total No. of Negative ele. = %d",count);
}
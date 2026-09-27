//  Copy all elements of one array to another. 

#include<stdio.h>
void main()
{
    int n,i;
    printf("Ener How many Number You want to Enter : ");
    scanf("%d",&n);
    int a[n],b[n];

    for (i=0;i<n;i++)
    {
        printf("Enter the a[%d]",i);
        scanf("%d",&a[i]);
    }

    // for (j=0;j<n;j++)
    // {
    //     a[i]=a[j];
    // }

    for (i=0;i<n;i++)
    {
        b[i]=a[i];
        
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    
    
}
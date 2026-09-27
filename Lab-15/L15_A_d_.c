//  Search element in array. 
#include <stdio.h>
void main()
{
    int n, i, count = 0,search;
    printf("Enter How many Number you want to enter : ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    // search
    printf("to Search the number enter i = a[i]");
    scanf("%d",&search);
    for (i=0;i<n;i++)
    {
        if (i==search)
        {
            // count=1;
            printf("Searcher Number %d\n",a[i]);
        }
    }
    // printf("Number found Succesfully");
}
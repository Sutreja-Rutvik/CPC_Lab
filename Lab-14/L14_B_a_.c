//  Count numbers higher than the average of an array. 

#include<stdio.h>
void main()
{
    int n,i,count=0;
    float sum=0;
    printf("Enter How many number you want to enter : ");
    scanf("%d",&n);
    int a[n];

    for (int i=0;i<n;i++)
    {
        printf("Enter the Number : a[%d]",i);
        scanf("%d",&a[i]);

        sum = sum + a[i];
    }
    float avg;
    avg = sum/n;

    int higher;
    
    for (int i=0;i<n;i++)
    {
        if (a[i]>avg)
        {
            higher=a[i];
            count++;
        } 
    }
    printf("Higher Numver is = %d",count);
}
// Find Max, Min, Sum, Avg. of given numbers from an array. 

#include<stdio.h>
void main()
{
    int n,i;
    float sum=0;
    printf("Enter how many number you want ot enter : ");
    scanf("%d",&n);
    int a[n];

    for (i=0;i<n;i++)
    {
        printf("Enter the Number : a[%d] ",i);
        scanf("%d",&a[i]);
        sum=sum+(float)a[i];
    }

    int max=a[0];
    int min=a[0];

    for (i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    
    float avg=sum/n;

    printf("Sum of Given Num. = %f \n",sum);
    printf("Avg. of Given NUmber = %f \n",avg);
    printf("Maximum of given Number = %d \n",max);
    printf("Minimum of given Number = %d \n",min);
    
}
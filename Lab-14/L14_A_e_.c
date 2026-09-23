/* Read five person height and weight and count the number of person having height greater than 170 and 
weight less than 50. */

#include<stdio.h>
void main()
{
    int n =5, i, count=0;

    int h[n],w[n];

    for (i=0;i<n;i++)
    {
        printf(" Enter your Height and Weight a[%d] : \n",i);
        
        printf("Enter your Height : ");
        scanf("%d",&h[i]);

        printf("Enter your Weight : ");
        scanf("%d",&w[i]);


        if (h[i]>170 && w[i]<50)
        {
            count++;
        }
        
    }

    printf("\n Number of persons who have  heihgt>170 \n and weight < 50 = %d", count);
    
    
}
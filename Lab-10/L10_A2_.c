// Find the sum and average of different numbers which are accepted by user as many as user wants. 

#include<stdio.h>
void main()
{
    int n, sum=0, count=0;
    float avg;
    printf("Enter -1 if you want to leave the Loop");

    while (1)    
    {
        printf("\nEnter a Number : ");
        scanf("%d",&n);
        if (n==-1)
        {
            break;
        }
        sum=sum+n;
        count++;
    }
    
    printf("\n Sum of Given Number = %d",sum);

    avg=sum/count;

    printf("\n Average of Given Number = %d",avg);
    
}
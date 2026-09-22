// Print sum of 1 to n numbers. 
#include<stdio.h>
void main()
{
    int n , sum=0;
    printf("Enter n Number : ");
    scanf("%d",&n);

    for (int i=1; i<=n;  i++)
    {
        sum = sum+i;
    }
    printf("%d",sum);
    
}
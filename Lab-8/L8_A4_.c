// // 4. Print sum of 1 to n numbers.  

#include<stdio.h>
void main()
{
    int n,i=1,sum=0;

    printf("Enter 'n' number : ");
    scanf("%d",&n);

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of given between numbers = %d",sum);
    
}
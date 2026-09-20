// 5. Get 10 numbers from user print count of odd, even numbers 

#include<stdio.h>
void main()
{
    int n,i=1;
    int odd=0,even=0;

    while (i<=10)
    {
        printf("Enter number : ");
        scanf("%d",&n);

        if (n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
            
    }
    
    printf("Count of odd number = %d", odd );
    printf("\nCount of even number = %d", even );
    
}
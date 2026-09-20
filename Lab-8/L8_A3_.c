// 3. Print numbers between two given numbers which is divisible by 2.  
#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter 'a' number : ");
    scanf("%d",&a);

    printf("Enter 'b' number : ");
    scanf("%d",&b);

    printf("Number divisoble by 2 between %d and %d : \n",a,b);

    // i=a;

    while (a<=b)
    {
        if (a%2==0)
        {
            printf("\n%d",a);
        }
        a++;
        
    }
    
}
// 5.  Find factors of the given number. 

#include<stdio.h>
void main()
{
    int a,i=1  ;
    printf("Enter a : ");
    scanf("%d",&a);

    while (i<=a)
    {
        // if (i%2==0)
        if (a%i==0)
        {
            printf(" x %d  ",i);
        }

        i++;
        
    }
    
}
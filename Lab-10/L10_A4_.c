// Print digits of given number. 

#include<stdio.h>
void main()
{
    int n,rev=0,rem=0,x;
    printf("Enter Number : ");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        rev = (rev*10) + rem;
        n=n/10;
    }
    // rev=x
    while (rev>0)
    {
        x=rev%10;
        printf("%d\n",x);
        rev=rev/10;
        
    }
    
}
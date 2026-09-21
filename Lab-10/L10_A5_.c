// Print given number in reverse order. 

#include<stdio.h>
void main()
{
    int n,rev=0,rem=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        rev = rem;
        n=n/10;
        printf("%d",rev);
    }
}
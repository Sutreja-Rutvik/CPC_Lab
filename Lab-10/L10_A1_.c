// Find out sum of first and last digit of a given number. 

#include<stdio.h>

void main()
{
    int n, last, first,rem=0,rev=0,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    last= n % 10;

    while (n>0)
    {
        rem=n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
    first = rev % 10;

    sum=  first + last;

    printf("%d",sum);

    
}
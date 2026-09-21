#include<stdio.h>
void main()
{
    int n , rev=0 , original ,rem;
    
    printf("Enter n Number : ");
    scanf("%d",&n);

    original=n;

    while (n>0)
    {
        rem=n%10;
        rev = rev*10 + rem;
        n=n/10;
    }

    if (rev==original)
    {
         printf("Number is Palindrome");
    }
    else
    {
         printf("Number is Not Palindrome");
    }
    
    
}
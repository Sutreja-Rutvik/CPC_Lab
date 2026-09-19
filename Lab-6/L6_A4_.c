#include<stdio.h>
void main()
{
    int x,rem;

    printf("Enter the Number : ");
    scanf("%d",&x);

    rem = x%10;
    if(rem%2==0)
    {
        printf("The last digit of given number is  %d =  Even  ",rem);
    }
    else
    {
        printf("The last digit of given number is  %d = Odd ",rem);
    }
    
}
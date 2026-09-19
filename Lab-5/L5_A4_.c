#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Given Number is 'even' ");
    }
    else
    {
        printf("Given Number is 'odd' ");
    }
}
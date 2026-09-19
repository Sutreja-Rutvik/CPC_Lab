#include<stdio.h>
void main ()
{
    int a, b, c;
    printf("Enter 'a' Number :  ");
    scanf("%d",&a);

    printf("Enter 'b' Number :  ");
    scanf("%d",&b);

    printf("Enter 'c' Number :  ");
    scanf("%d",&c);

    if ((a>b && a<c) || (a<b && a>c))
    {
        printf("a is Second Largest = %d ",a);
    }
    else if ((b>a && b<c ) || (b>c && b<a))
    {
        printf("b is Second Largest = %d",b);
    }
    else
    {
        printf("c is Second Largest = %d",c);
    }
    
    
}
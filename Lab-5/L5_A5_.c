#include<stdio.h>
void main()
{
    int a , b , c;
    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    printf("Enter 3rd number : ");
    scanf("%d",&c);

    if( a>b && a>c)
    {
        printf("a is largest : %d" ,a);
    }
    else if ( b>a && b>c)
    {
        printf("b is largest : %d" , b);
    }
    else
    {
        printf(" c is largest : %d",c);
    }
}
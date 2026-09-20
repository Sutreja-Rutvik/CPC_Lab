// . Check whether number is even number or odd number using conditional operator

#include<stdio.h>
void main()
{
    int a;

    printf("Enter a Number : ");
    scanf("%d",&a);

    (a%2==0) ? (printf(" a is even")) : (printf(" a is odd")) ;
}

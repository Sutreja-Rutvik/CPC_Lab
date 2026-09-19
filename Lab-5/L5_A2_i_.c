#include<stdio.h>
void main()
{
    int a ,b , temp;
    printf("Entre 'a' number: ");
    scanf("%d",&a);

    printf("Entre 'b' number: ");
    scanf("%d",&b);

    temp = a;
    a=b;
    b=temp;

    printf(" a = %d", a);
    printf(" \n b = %d", b);


}
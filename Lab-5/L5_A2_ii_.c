#include<stdio.h>
void main()
{
    int a ,b , temp;
    printf("Entre 'a' number: ");
    scanf("%d",&a);

    printf("Entre 'b' number: ");
    scanf("%d",&b);

   a = a+b;
   b = a-b;
   a = a-b;

    printf(" a = %d", a);
    printf(" \n b = %d", b);


}
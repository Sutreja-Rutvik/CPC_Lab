// Swap value of two numbers using pointer.

#include <stdio.h>
void main()
{
    int a = 10, b = 15;
    int *p1 = &a, *p2 = &b;

    int temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("*p1 = %d  \n",*p1);
    printf("*p2 = %d ",*p2);
}
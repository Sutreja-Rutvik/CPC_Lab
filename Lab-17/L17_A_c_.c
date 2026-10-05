// Calculate sum of two numbers using pointer.

#include <stdio.h>
void main()
{
    int sum = 0;
    int a = 10, b = 15;
    int *p1 = &a, *p2 = &b;

    sum = *p1 + *p2 ;

    printf("Sum = %d",sum);
}
// Print value and address of a variable.

#include <stdio.h>
void main()
{
    int n=10;
    int *p=&n;
    printf("Address = %d\n",p);
    printf("Value = %d",*p);
}
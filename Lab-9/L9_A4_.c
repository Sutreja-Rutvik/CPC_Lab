// 4. Find factorial of the given number.

#include<stdio.h>
void main()
{
    int x, i=1, fact=1;

    printf("Enter x : ");
    scanf("%d",&x);

    while (i<=x)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial = %d", fact);
    
}
// Print multiplication table of a given number.

#include<stdio.h>
void main()
{
    int n;
    printf("Enter n Number : ");
    scanf("%d",&n);

    for (int i=1; i<=10; i++)
    {
        printf("\n %d x %d = %d",n , i , n*i);
    }
    
}
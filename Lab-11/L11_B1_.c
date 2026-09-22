// Print the Fibonacci Series.
// 0, 1, 1, 2, 3, 5, 8, 13, 21 , ...

/*
    first=0
    second=1
    next = first + second (1)

    1=0+1
    first=1(pre second) , second=1(pre next)

    2=1+1
    first=1(pre second) , second=2(pre next)

    3=1+2
    ....
*/

#include<stdio.h>
void main()
{
    int n , next , second=1 , first=0;

    printf("Enter n Number : ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        printf(" %d ",first);
        next = first + second;
        first=second;
        second=next;
    }
    
}

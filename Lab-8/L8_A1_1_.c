// 1. Print 1 to 10 then modify program Print 1 to n using while and do while loop. 

#include<stdio.h>
void main()
{
    int i=1, n;
    printf("Enter 'n': ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    
}
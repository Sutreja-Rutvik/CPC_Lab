// 2. Print multiplication table of a given number. 

#include<stdio.h>
void main()
{
    int a,i=1;

    printf("Enter table no. a : ");
    scanf("%d",&a);

    while (i<=10)
    {
        // printf("%d x %d = %d\n",a, i, a*i);
        printf("\n%d",a*i);
        i++;
    }
    
}
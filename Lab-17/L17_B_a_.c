// Copy one array to another using pointers.

#include <stdio.h>
void main()
{
    int n, *p, *q;
    printf("Enter How many Number You want to enter : ");
    scanf("%d", &n);

    int a[n], b[n];
    q = b;
    p = a;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the a[%d]: ",i);
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        *(q+i)=*(p+i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("b[%d] = %d \n",i,*(q+i));
    }
}
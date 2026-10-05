// Swap two arrays using pointers.

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
printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the b[%d]: ",i);
        scanf("%d", q + i);
    }
printf("\n");
    for (int i=0;i<n;i++)
    {
        int temp=*(p+i);
        *(p+i) = *(q+i);
        *(q+i)=temp;

        printf("a[%d] = %d ",i,*(p+i));
        printf(" b[%d] = %d \n",i,*(q+i));
    }
    

}
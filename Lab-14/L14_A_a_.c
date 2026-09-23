#include <stdio.h>
void main()
{
    int n;

    printf("Enter how many no. you want to enter : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("Reverse order :  \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

   /*for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }*/


    

    
}
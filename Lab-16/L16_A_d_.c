// Perform Addition of two matrices.

#include <stdio.h>
void main()
{
    int r, c;
    printf("Enter the number of raw");
    scanf("%d", &r);
    printf("Enter the number of cal.");
    scanf("%d", &c);
    int a[r][c], b[r][c],sum[r][c];

    printf("Enter 1st matrix\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the a[%d][%d : ]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 2nd matrix\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the a[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}
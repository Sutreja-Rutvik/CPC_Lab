// Read a matrix and print diagonal elements and its sum.

#include <stdio.h>
void main()
{
    int r, c;
    printf("Enter the number of raw");
    scanf("%d", &r);
    printf("Enter the number of cal.");
    scanf("%d", &c);
    int a[r][c], sum[r][c];

    printf("Enter matrix\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the a[%d][%d : ]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For Forward diagonal");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                printf("%d", a[i][j]);
                sum[i][j] = sum[i][j] + a[i][j];
            }
        }
    }
    printf("Sum = %d", sum);

    printf("For Backword diagonal");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j ==2)
            {
                printf("%d", a[i][j]);
                sum[i][j] = sum[i][j] + a[i][j];
            }
        }
    }
    printf("Sum = %d", sum);
}
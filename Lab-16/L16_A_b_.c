// Count number of positive, negative and zero elements from 3 X 3 matrix.

#include <stdio.h>
void main()
{
    int a[3][3], positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);

            if (a[i][j] > 0)
            {
                positive++;
            }
            else if (a[i][j] < 0)
            {
                negative++;
            }
            else
            {
                zero++;
            }
        }
    }
    printf("Total Positive num. = %d\n", positive);
    printf("Total Negative num. = %d\n", negative);
    printf("Total Zero num. = %d", zero);
}
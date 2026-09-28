//  Read and store the roll no and marks of 20 students using 2D array.

#include <stdio.h>
void main()
{
    int a[20][2];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll no. & mark : ");
        scanf("%d %d", &a[i][0], &a[i][1]);
    }

    printf("Roll Num. \t mark ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d \t : \t  %d\n", a[i][0], a[i][1]);
    }
}
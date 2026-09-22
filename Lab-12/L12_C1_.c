//  pascal tringle
/*
   1
  1 2
 1 2 1
1 3 3 1
*/

#include<stdio.h>
void main()
{
    int n,num=1;
    printf("Enter n : ");   scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        for (int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        
        num=1;
        for (int j=0;j<=i;j++)
        {
            printf("%d ", num);
            num = num *(i-j)/(1+j);
        }
        printf("\n");
    }
    
}
// Add two matrix using pointers. 

#include<stdio.h>
void main()
{
    int n,m,*p,*q,*r;
    printf("Enter m x n matrix :");
    scanf("%d %d",&m,&n);

    int a[m][n];
    int b[m][n];
    int c[m][n];
    p=a;
    q=b;
    r=c;

    printf("Enter 1st matrix \n");
    for (int i=0;i<m*n;i++)
    {
        // for (int j=0;j<n;j++)
        // {
            printf("Enter the a[%d][%d]",i);
            scanf("%d",p+i);
        // } 
    }

    printf("Enter 2nd matrix \n");
    for (int i=0;i<m*n;i++)
    {
        // for (int j=0;j<n;j++)
        // {
            printf("Enter the b[%d][%d]",i);
            scanf("%d",q+i);
        // } 
    }

    for (int i=0;i<m*n;i++)
    {
        // for (int j=0;j<n;j++)
        // {
            *(r+i) = *(p+i) + *(q+i);
        // }
        
    }

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
}
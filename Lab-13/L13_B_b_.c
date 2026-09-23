/*
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
*/
/*odd=1,,even=0*/

#include<stdio.h>
void main()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<+i;j++)
        {
            ((i+j)%2==0)?(printf("1 ")):(printf("0 ")) ;
        }
        printf("\n");
    }
    
}
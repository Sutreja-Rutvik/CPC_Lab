/* c
5 
54 
543 
5432 
54321 
*/

#include<stdio.h>
void main()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=5;j>=6-i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}
/*  
st=5,end=5 => j<=i (1) 5-i (4) [5] 6-i
*/
/* print
1 
22 
333 
4444 
55555
*/

#include"stdio.h"
void main()
{
    for (int i=1;i<=5;i++)
    {
        int temp=i;

        for (int j=1;j<=temp;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
}
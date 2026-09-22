/* print
1 
12 
123 
1234 
12345 
*/

#include"stdio.h"
void main()
{
    for (int i=1;i<=5;i++)
    {
        int temp=i;

        for (int j=1;j<=temp;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}
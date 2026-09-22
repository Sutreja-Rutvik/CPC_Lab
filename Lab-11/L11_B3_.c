//  Print all ASCII character with their values.
#include<stdio.h>
void main()
{
    for (int i=33; i<127; i++)
    {
        char ch =i;
        printf("\n %d = %c ", i,i);
    }
}

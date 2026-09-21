/* Convert decimal number to binary. (i.e. n=11  output: 1101?
n=Decimal number                                                               */

#include <stdio.h>

void main()
{
    int n, binary, i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        binary = n % 2;
        n = n / 2;
        i++;

        printf("%d",binary); 
    }

   
}
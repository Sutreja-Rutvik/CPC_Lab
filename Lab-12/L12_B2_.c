// e = 1 + 1/1! + 1+2! + 1/3! + ... +1/n!

#include <stdio.h>
void main()
{
    int n;
    float sum=1.0,fact;
    printf("Enter n : ");   scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact=1;
        for (int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum = sum + (1.0/fact); 
    }
    printf("%f",sum);
}
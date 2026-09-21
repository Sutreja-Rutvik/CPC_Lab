// 1. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n. (while loop)

#include<stdio.h>
void main()
{
int i=1,a,sum=0;
printf("Enter a : ");
scanf("%d",&a);

while (i<=a)
{
    if (i%2!=0)
    {
        // printf("%d  ",  i);

        sum=sum+i;
    }
    else
    {
        // printf(" + %d",  i);
        sum=sum-i;
    }
    i++;
    
}
printf("Sum of series = %d", sum);


}
// 3. Calculate 𝑥^𝑦 without using power function.  

#include<stdio.h>
void main()
{
    int x, y, i=1, ans=1;

    printf("Enter x : ");
    scanf("%d",&x);

    printf("Enter y : ");
    scanf("%d",&y);

    while (i<=y)
    {
        ans=ans*x;
        i++;
    }
    printf("%d^%d = %d",x,y,ans);
    
}
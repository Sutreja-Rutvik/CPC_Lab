// Calculate 𝑥^𝑦 without using power function. 

#include<stdio.h>
void main()
{
    int x,y,ans=1;
        printf("Enter Your Number x^y : ");

        printf("Enter x : ");
        scanf("%d",&x);

        printf("Enter y : ");
        scanf("%d",&y);

    for (int i=1; i<=y; i++)
    {
       ans=ans*x; 
    }
    printf("%d",ans);
    
}
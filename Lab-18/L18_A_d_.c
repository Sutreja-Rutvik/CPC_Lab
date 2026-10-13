// Return the maximum of three floating-point numbers. 
#include<stdio.h>
float floatingpoint( float a, float b, float c );
void main()
{
    float a,b,c,ans;

    printf("Enter the a : ");   scanf("%f",&a);
    printf("Enter the b : ");   scanf("%f",&b);
    printf("Enter the c : ");   scanf("%f",&c);

    ans=floatingpoint(a,b,c);
    printf(" three floating-point number = %.3f",ans);
}
float floatingpoint( float a, float b, float c )
{
    if (a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
    
}
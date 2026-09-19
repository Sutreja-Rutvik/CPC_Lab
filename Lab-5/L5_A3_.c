#include<stdio.h>
void main()
{
    float a;
    printf("Enter 'a' mumber: ");
    scanf("%f",&a);

    if(a>0)
    {
        printf(" 'a' is positive");
    }
    else if (a<0)
    {
        printf("'a' is Negative");
    }
    else
    {
        printf("'a' is Zero");
    }
    

}
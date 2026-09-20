// Read 3 numbers, multiply largest number from first two numbers to third one using conditional. 


#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter a number : ");
    scanf("%d",&a);
    
    printf("Enter b number : ");
    scanf("%d",&b);
    
    printf("Enter c number : ");
    scanf("%d",&c);

    (a>b)  ?  (printf("%d",a*c))  :  (printf("%d",b*c));
    
}
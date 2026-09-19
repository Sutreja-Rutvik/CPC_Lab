// 2. Determine the roots of the equation ax2+bx+c=0. 

#include<stdio.h>
#include<math.h>
void main()
{
    // ax^2 + bx + c=0
    float a, b, c;
    float d, x1 , x2;

    printf("Enter Value of a, b, c :  ");
    printf("Enter 'a' Number : ");
    scanf("%f",&b);

    printf("Enter 'b' Number : ");
    scanf("%f",&a);

    printf("Enter 'c' Number : ");
    scanf("%f",&c);

    d = b*b - 4*a*c;
    // x12 = [-b +- sqrt(b^2 - 4ac)]/2a

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        printf("Root of x1 = %f\n",x1);
        printf("Root of x2 = %f\n",x2);
    }
    else if (d==0)
    {
        x1 = -b/(2*a);
        printf("Root of x1 = %f\n",x1);
    }
    else
    {
        printf("Roots are Complex.\n");
    }
    
    
}
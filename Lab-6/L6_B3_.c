// Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is 
// isosceles, equilateral, scalene or right-angled triangle. 

#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter Three sides of Tringle ::");

    printf("Enter side of 'a' : "  );
    scanf("%d",&a);

    printf("Enter side of 'b' : "  );
    scanf("%d",&b);

    printf("Enter side of 'c' : "  );
    scanf("%d",&c);

    if (a==b && b==c)
    {
        printf("Equilateral Tringle");
    }
    else if (a==b || b==c | c==a)
    {
        printf("Isosceles Triangle");
    }
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        printf("Right-Angled Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    
    
    
} 
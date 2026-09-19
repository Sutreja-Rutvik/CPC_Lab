#include<stdio.h>
void main()
{
    int s1, s2, s3, s4, s5;
    float p;

    printf("Enter s1 subject mark : ");
    scanf("%d",&s1);

    printf("Enter s2 subject mark : ");
    scanf("%d",&s2);

    printf("Enter s3 subject mark : ");
    scanf("%d",&s3);

    printf("Enter s4 subject mark : ");
    scanf("%d",&s4);

    printf("Enter s5 subject mark : ");
    scanf("%d",&s5);

    p = (s1 +s2 + s3 + s4 + s5)/5;
    printf("%f",p);

    if(p<35)
    {
        printf("Faill");
    }
    else if (p>36 && p<45)
    {
        printf("Pass Class");
    }
    else if (p>46 && p<60)
    {
        printf("Second Class");
    }
    else if (p>61 && p<70)
    {
        printf("First Class");
    }
    else if (p>70 && p<=100)
    {
        printf("Distincton");
    }
    else
    {
        printf("Enter Valid makrs");
    }
    
}
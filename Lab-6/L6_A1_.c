#include<stdio.h>
void main()
{
    float x, y, add, mult, div,subs;
    int choice;
    
    printf("Enter 1st number (x) : ");
    scanf("%f",&x);

    printf("Enter 2nd number (y): ");
    scanf("%f",&y);

    printf("Choose operating system: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division \n");

    add = x+y;
    subs = x-y;
    mult = x*y;
    div = x/y;

    printf("Enter your Choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("%f",add);
    }
    else if(choice==2)
    {
        printf("%f",subs);
    }
    else if(choice==3)
    {
        printf("%f",mult);
    }
    else if(choice==4)
    {
        printf("%f",div);
    }
    else
    {
        printf("Invalid Choice");
    }
}
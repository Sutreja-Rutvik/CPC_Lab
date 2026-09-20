#include<stdio.h>
void main()
{
    int a,b,choice;
    int add, subs, mult,div;

    printf("Enter 1st Number : ");
    scanf("%d",&a);

    printf("Enter 2nd Number : ");
    scanf("%d",&b);
   
    printf("\n1. '+' ");
    printf("\n2. '-' ");
    printf("\n3. '*' ");
    printf("\n4. '/' ");

    printf("Enter Your Choice  : ");
    scanf("%d",&choice);

    

    switch (choice)
    {
        case 1:     add = a+b;
                    printf(" %d", add);
                    break;
        // add = a+b;
        // printf(" %d", add);
        // break;

        case 2:
        subs = a-b;
        printf("%d",subs);
        break;
    

        case 3:
        mult = a*b;
        printf("%d",mult);
        break;
    

        case 4:
        div = a/b;
        printf("%d",div);
        break;
    
    
    default:
    printf("Invalid Choice");
        break;
    }


}
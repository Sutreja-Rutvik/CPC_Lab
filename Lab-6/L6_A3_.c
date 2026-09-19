#include<stdio.h>
void main()
{
    char ch;

    printf("Enter a Character : ");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("Given Character is : Upper Case");
    }
    else if (ch>='a' && ch<='z')
    {
       printf("Given Character is : Lower Case");
    }
    else if (ch>='0' && ch<='9')
    // else if(1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 0 )
    {
        printf("Given Character is : Digit");
    }
    else 
    {
        printf("Given Charcter is : Any Special Character ");
    }

    
}
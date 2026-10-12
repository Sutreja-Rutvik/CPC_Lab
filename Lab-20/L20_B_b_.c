// Manual implementation of strlen(), strcpy() and strcmp() function.

#include <stdio.h>
void main()
{
    printf("For or strlen() \n");
    char s[100];
    int len = 0;
    printf("Enter String : ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length = %d\n", len);

    
}
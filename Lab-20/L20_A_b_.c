// Scan a character string passed as an argument and convert all lowercase string to uppercase string. 

#include<stdio.h>
void main()
{
    char s[100] , *p;

    printf("Enter string : ");
    gets(s);

    p=s;

    while (*p != '\0')
    {
        if (*p>='A' && *p<='Z' || *p>='a' && *p<='z' || *p>='0' && *p<='9' )
        {
            printf("%c",*p);
        }
        p++;
    }
    
}   
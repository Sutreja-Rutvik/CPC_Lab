// 1. Find weather given string is palindrome or not.  

#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("Enter string : ");
    gets(s);

    int len = strlen(s);
    int flag=0;
    for (int i=0;i<len/2;i++)
    {
        if (s[i]!=s[len-1-i])
        {
            flag=1;
        } 
    }
    if (flag==0)
    {
        printf("Given String is Palindrone");
    }
    else{
        printf("Not");
    }
    
}
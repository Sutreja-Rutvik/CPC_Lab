// 1. Print all uppercase and lowercase alphabets. 

#include<stdio.h>
void main()
{
    char ch;

    ch='A';
    printf("Upper Case Charcter : ");
    while (ch<='Z')
    {
        printf("%c",ch);
        
        ch++;
    }
    printf("\n");
    printf("Lower Case Character : ");
    ch='a';
    while (ch<='z')
    {
        printf("%c",ch);
        ch++;
    }
    
    
    
}
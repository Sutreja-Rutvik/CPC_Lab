// Check whether character is an alphabet or not using conditional operator.

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    (ch>='A' && ch<='Z' || ch>='a' && ch<='z' )  ?  (printf("Given Character is Alphabet"))  :  (printf("Given Number is Not Alphabet"));
}
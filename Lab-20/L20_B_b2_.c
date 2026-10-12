// Manual implementation of strcpy()function.


#include <stdio.h>

void main()
{
    char s1[100], s2[100];
    int i;

    printf("Enter String s1 : ");
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    printf("Copied String s2 : %s", s2);
}
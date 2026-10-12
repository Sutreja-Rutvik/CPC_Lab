
#include <stdio.h>

void main()
{
    char s1[100], s2[100];
    char *p, *q;

    printf("Enter the String: ");
    gets(s1);

    p = s1;
    q = s2;

    while (*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }

    *q = '\0';

    printf("Copied String: %s", s2);
}   
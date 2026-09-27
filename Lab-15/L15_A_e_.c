// Input a string in character array and print string and length of string.

#include <stdio.h>
#include <string.h>
void main()
{
    int count = 0;

    char a[100];

    printf("Enter Input : ");
    gets(a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length %d", count);
}

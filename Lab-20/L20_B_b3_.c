// Manual implementation of strcamp()function.

#include<stdio.h>
void main()
{
    int flag=0,temp=0;
    char s1[100],s2[100];
    printf("Enter 1st string : ");
    gets(s1);

    printf("Enter 2nd string : ");
    gets(s2);

    for (int i=0;  s1[1]!='0'  ;i++)
    {
        if (s1[i]!=s2[i])
        {
            flag=1;
            break;
        } 
    }
    if (flag==1)
    {
        printf("not same");
    }
    
    
}
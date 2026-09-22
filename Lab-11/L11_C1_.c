// Swap first and last digits of a number.  

#include<stdio.h>
void main()
{
    int n,digit=0;
    printf("Enter n : ");  scanf("%d",&n);

    int temp=n; 

    // for find number's digit

    for (; temp!=0;)
    {
        digit++;
        temp=temp/10; /*  temp/=10  */
    }

    // now, temp=0 ==> n=temp
    temp=n;
    int rev=0;

    for (;temp!=0;)
    {
        rev = rev*10 + (temp%10);
    }

    // rev = revers num. && n = given number
    
    int ans=0;
    for (int i=1; i<=digit; i++ )
    {
        if (i==1) /*for last dgt of gvn nmbr */
        {
            ans=n%10;
        }
        else if (i==digit)
        {
            ans = ans*10 + (n%10);
        }
        else{
            ans = ans*10 + (rev%10);
        }
        n=n/10;
        rev=rev/10;
    }

    printf("%d",&ans);
}
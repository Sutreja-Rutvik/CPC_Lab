//  Find whether the given number is prime or not using flag.

#include<stdio.h>
void main()
{
    int n, i=2, flag=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    while (i<n)
    {

        if(n%i==0)
        {
            flag=1;
            // break;
        }
        i++;

        // n % i == 0;
        // flag = flag +1;
        // i++;
    }
    
    if (flag==0)
    {
         printf("Given Number is Prime Number ");
    }
     else{
        printf("Not Prime");
    }
    
}
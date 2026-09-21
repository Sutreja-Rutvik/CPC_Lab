#include<stdio.h>
void main()
{
    int n , rem=0 , rev=0 , original , sum=0;

    printf("Enter n Number : ");
    scanf("%d",&n);

    original=n;

    while (n>0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
                    // sum = sum + rem*rem*rem*rem;
                    // for 4 number digit ↑
        n = n/10;
    }

    if (original==sum)
    {
          printf("Number is Armstrong");
    }
    else{
          printf("Number is Not Armstrong");
    }
    
}
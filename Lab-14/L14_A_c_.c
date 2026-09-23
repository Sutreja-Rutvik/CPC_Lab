// Count number of even or odd number from an array of n numbers. 

#include<stdio.h>
void main()
{
    int n=5,i,odd=0,even=0;

    /*printf("Enter how many number you want to enter : ");
    scanf("%d", &n);*/
    int a[n];

    for (i=0;i<n;i++)
    {
        printf("Entre the Number a[%d] : ",i);
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("Count of Even Number : %d \n",even);
    printf("Count of Odd Number : %d",odd);
    
}
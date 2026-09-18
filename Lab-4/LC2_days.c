#include<stdio.h>
void main()
{
    int days , year , week;

    printf("Entre days: ");
    scanf("%d",&days);

    year = days/365;

    week = (days - (365*year))/7;

    days =(days - (365*year + 7*week));

    printf("%d : %d : %d" , year , week , days);
}
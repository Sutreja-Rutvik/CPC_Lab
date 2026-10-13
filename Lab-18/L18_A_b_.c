// 2. Find maximum and minimum between two numbers using function.

#include<stdio.h>
int max(int a, int b);
int min(int a, int b);
void main()
{
    int a,b,maximum,minimum;
    printf("Enter the number : ");  scanf("%d",&a);
    printf("Enter the number : ");  scanf("%d",&b);
    maximum = max(a,b);
    minimum = min(a,b);
    printf("Maximum = %d\n",maximum);
    printf("Maximum = %d",minimum);
}
int max(int a, int b){
    if (a>b){
        return a;
    }
    else{return b;}
}
int min(int a, int b){
    if (a<b){
       return a;
    }
    else{return b;}
}
// 1. Add two numbers using function. 

#include<stdio.h>
int add( int a, int b);
void main(){
    int a,b,sum;
    printf("Enter the number : ");  scanf("%d",&a);
    printf("Enter the number : ");  scanf("%d",&b);

    sum = add(a,b);
    printf("Sum = %d",sum);
}
int add( int a, int b){
    return a+b;
}
//  Swap two numbers using call by value and call by reference. 
#include<stdio.h>
int callbyvalue(int a,int b);
int referencevalue(int *p,int *q);

void main()
{
    int a,b,ans1,ans2;
    printf("Enter the number : ");  scanf("%d",&a);
    printf("Enter the number : ");  scanf("%d",&b);

    ans1 = callbyvalue(a,b);
    ans2 = referencevalue(&a,&b);
    // printf("callbyvalue = %d\n",ans1);
    // printf("referencevalue = %d",ans2);
    int *p=a,*q=b;
    printf("/n referencevalue = %d , %d",p,q);
    
}
int callbyvalue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("callbyvalue = %d , %d",a,b);
}


int referencevalue(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    // return a,b;
}
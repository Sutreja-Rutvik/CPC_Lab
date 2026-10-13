// Count simple interest using function. 
#include<stdio.h>
float simpleinterset(float p, float r, float t);
void main()
{
    float p,r,t,si;

    printf("Enter the p : ");   scanf("%f",&p);
    printf("Enter the r : ");   scanf("%f",&r);
    printf("Enter the t : ");   scanf("%f",&t);

    si = simpleinterset(p,r,t);
    printf("SIP = %f",si);
}
float simpleinterset(float p, float r, float t){
    return (p*r*t)/100;
}

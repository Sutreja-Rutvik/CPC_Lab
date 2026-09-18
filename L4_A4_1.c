#include<stdio.h>
void main()
{
    float a ,b, c, avg;

    printf("Entre 1st number: ");
    scanf("%f",&a);

    printf("Entre 2nd number: ");
    scanf("%f",&b);

    printf("Entre 3rd number: ");
    scanf("%f",&c);

    avg = (a+b+c)/3;

    printf("%f",avg);
}
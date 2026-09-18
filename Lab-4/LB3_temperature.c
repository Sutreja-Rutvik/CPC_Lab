#include<stdio.h>
int main()
{
    float f , c;
    printf("Entre the Fahrenheit temp.: ");
    scanf("%f",&f);

    c = (((f-32)*5))/9;

    printf("The Celsius is %f", c);
    return 0;
}
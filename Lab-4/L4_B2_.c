#include<stdio.h>
void main()
{
    float principal , roi , time_period , simple_interest;

    printf("Entre rate of interest (roi): ");
    scanf("%f",&roi);

    printf("Entre time period: ");
    scanf("%f",&time_period);

    printf("Entre The  principal amount: ");
    scanf("%f",&principal);

    simple_interest = (principal*roi*time_period)/100; 

    printf("Simple Interest = %f" , simple_interest);


}
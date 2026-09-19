#include <stdio.h>
void main()
{
    float unit, bill;

    printf("Enter Bill Units : ");
    scanf("%f", &unit);

    if (unit <= 50)
    {
        bill = unit * 0.50;
        
    }
    else if (unit <= 150)
    {
        bill = (unit - 50) * 0.75 + (50 * 0.50);

    }
    else if (unit <= 250)
    {
        bill = (unit - 150) * 1.2 + (100 * 0.75) + (50 * 0.50);
        
    }
    else
    {
        bill = (unit - 250) * 1.5 + (100 * 1.2) + (100 * 0.75) + (50 * 0.50);
    }
    printf("Electricity Bill = %f\n", bill);
    
    float surcharge = bill*0.2; 

    // bill = bill * 0.20 + bill;

    printf(" surcharge = %f\n", surcharge);

    
    printf("Generated Bill = %f", bill + surcharge);
}
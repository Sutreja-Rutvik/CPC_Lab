// Demonstrate int, float, double and char pointer.

#include <stdio.h>
void main()
{
    int a = 10;
    float b = 20.5;
    double c = 30.5;
    char d = 'A';

    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;
    char *p4 = &d;

    printf("Address = %d : ", p1);
    printf("Value = %d\n", *p1);

    printf("Address = %d : ", p2);
    printf("Value = %f\n", *p2);

    printf("Address = %d : ", p3);
    printf("Value = %lf\n", *p3);

    printf("Address = %d : ", p4);
    printf("Value = %c\n", *p4);
}
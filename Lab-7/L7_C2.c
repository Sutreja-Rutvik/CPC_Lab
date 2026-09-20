#include<stdio.h>
void main()
{
    int month;

    printf("Enter Month Number (1-12) : ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31-Days");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30-Days");
    
    default:
    printf("29 or 28 - Days");
        break;
        
    }

   }
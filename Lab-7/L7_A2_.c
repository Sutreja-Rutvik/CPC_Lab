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

    // switch (month)
    // {
    // case 1:
    //     printf("January - 31 days");
    //     break;

    //     case 2:
    //     printf("February - 28 & 29 days");
    //     break;

    //     case 3:
    //     printf("March - 31 days");
    //     break;

    //     case 4:
    //     printf("April - 30 days");
    //     break;

    //     case 5:
    //     printf("May - 31 days");
    //     break;

    //     case 6:
    //     printf("June - 30 days");
    //     break;

    //     case 7:
    //     printf("July - 31 days");
    //     break;

    //     case 8:
    //     printf("Augest - 31 days");
    //     break;

    //     case 9:
    //     printf("September - 30 days");
    //     break;

    //     case 10:
    //     printf("October - 31 days");
    //     break;

    //     case 11:
    //     printf("November - 30 days");
    //     break;

    //     case 12:
    //     printf("December - 31 days");
    //     break;


    
    // default:
    // printf("Invaid Month Numer");
    //     break;
    // }
}
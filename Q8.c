
#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday - Working Day");
            break;

        case 2:
            printf("Tuesday - Working Day");
            break;

        case 3:
            printf("Wednesday - Working Day");
            break;

        case 4:
            printf("Thursday - Working Day");
            break;

        case 5:
            printf("Friday - Working Day");
            break;

        case 6:
            printf("Saturday - Weekend");
            break;

        case 7:
            printf("Sunday - Weekend");
            break;

        default:
            printf("Invalid Day");
    }

    return 0;
}

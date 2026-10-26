#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 5 == 0)
    {
        printf("Special");
    }
    else if (n % 2 == 0)
    {
        printf("Even");
    }
    else if (n % 5 == 0)
    {
        printf("Five");
    }
    else
    {
        printf("Odd/Other");
    }

    return 0;
}
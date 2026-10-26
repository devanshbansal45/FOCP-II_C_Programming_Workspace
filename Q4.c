#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid");
    }
    else if (a < 90 && b < 90 && c < 90)
    {
        printf("Acute");
    }
    else if (a == 90 || b == 90 || c == 90)
    {
        printf("Right");
    }
    else
    {
        printf("Obtuse");
    }

    return 0;
}
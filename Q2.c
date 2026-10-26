#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
    {
        printf("Middle value = %d", a);
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        printf("Middle value = %d", b);
    }
    else
    {
        printf("Middle value = %d", c);
    }

    return 0;
}
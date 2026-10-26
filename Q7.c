#include <stdio.h>

int main()
{
    int pin, amount, balance;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Enter balance: ");
    scanf("%d", &balance);

    if (pin != 1234)
    {
        printf("Invalid PIN");
    }
    else
    {
        if (amount <= 0 || amount % 100 != 0)
        {
            printf("Invalid Amount");
        }
        else
        {
            if (amount > balance)
            {
                printf("Insufficient Balance");
            }
            else
            {
                printf("Withdrawal Successful");
            }
        }
    }

    return 0;
}
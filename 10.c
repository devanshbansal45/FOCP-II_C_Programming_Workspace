
#include <stdio.h>

int main()
{
    int p1, p2;

    printf("Enter choices of Player 1 and Player 2 (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d %d", &p1, &p2);

    if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3)
    {
        printf("Invalid Input");
    }
    else if (p1 == p2)
    {
        printf("Draw");
    }
    else
    {
        switch (p1)
        {
            case 1:
                if (p2 == 3)
                    printf("Player 1 Wins");
                else
                    printf("Player 2 Wins");
                break;

            case 2:
                if (p2 == 1)
                    printf("Player 1 Wins");
                else
                    printf("Player 2 Wins");
                break;

            case 3:
                if (p2 == 2)
                    printf("Player 1 Wins");
                else
                    printf("Player 2 Wins");
                break;
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int p1, t, p2, w = 1;
    scanf("%d%d", &p1, &t);

    for(;t > 0; t--)
    {
        scanf("%d", &p2);

        if (p1 == p2)
        {
            printf("Right, Player-2 wins!\n");
            w = 0;
            break;
        }
        printf("Wrong, %d Choice(s) Left!\n", t-1);
    }
    if (w == 1)
    printf("Player-1 wins!\n");

    return 0;
}

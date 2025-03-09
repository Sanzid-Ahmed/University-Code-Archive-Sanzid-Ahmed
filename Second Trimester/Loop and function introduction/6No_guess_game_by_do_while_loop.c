#include <stdio.h>

int main()
{
    int p1, t, p2, i, w = 1;
    scanf("%d%d", &p1, &t);

    i = t;

    do
    {
        scanf("%d",  &p2);

        if(p2 == p1)
        {
            w = 0;
            printf("Right, Player-2 wins!\n");
            break;
        }

        i--;
        printf("Wrong, %d Choice(s) Left!\n", i);
    }
    while(i > 0);

    if(w == 1) //আমি লিখেছি w = 1 এটার মানে w তে  1 assign করলাম তাই কাজ করবে না।
    {
    printf("Player-1 wins!\n");
    }

    return 0;
}

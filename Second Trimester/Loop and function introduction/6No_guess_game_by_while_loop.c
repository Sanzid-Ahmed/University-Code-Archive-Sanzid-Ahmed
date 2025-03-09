#include <stdio.h >

int main()
{
    int p1, t, i, p2, w=0;
    scanf("%d%d",&p1,&t);

    i = t;

    while (i > 0)
    {
        scanf("%d", &p2);
        if (p2 == p1)
        {
            printf("Right, Player-2 wins!\n");
            w=1;
            break;
        }

        i--; // Decrease attempts **before** printing the remaining choices

        printf("Wrong, %d Choice(s) Left!\n",i);

        // i--; // Decrease attempts **before** printing the remaining choices
    }

    if(w == 0) //আমি লিখেছি w = 1 এটার মানে w তে  1 assign করলাম তাই কাজ করবে না।
    printf("Player-1 wins!\n");

    return 0;
}

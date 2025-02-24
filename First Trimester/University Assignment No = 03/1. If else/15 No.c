#include <stdio.h>

int main()
{

    int x,g1,g2,g3;
    int flag=0;

    printf("Player-1 enter a number:\n");
    scanf("%d",&x);

    printf("Player-2 enter your first guess:\n");
    scanf("%d",&g1);

    if(g1==x)
    {
        printf("Right, Player-2 wins!\n");
        flag=1;
    }
    else
    {
        printf("Wrong, 2 Chances Left!\n");
    }//sanzid ahmed

    if(flag==0)
    {
        printf("Player-2 enter your second guess:\n");
        scanf("%d",&g2);

        if(g2==x)
        {
            printf("Right, Player-2 wins!\n");
            flag=1;
        }
        else//sanzid ahmed
        {
            printf("Wrong, 1 Chance Left!\n");
        }
    }

    if(flag==0)
    {
        printf("Player-2 enter your second guess:\n");
        scanf("%d",&g3);

        if(g3==x)
        {
            printf("Right, Player-2 wins!\n");
            flag=1;
        }
        else
        {
            printf("Wrong, 0 Chance Left!\nPlayer-1 wins!\n");
        }
    }
    return 0;
}

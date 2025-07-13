#include <stdio.h>

int main()
{

    int x,g1,g2,g3;
    int flag=0;

    printf("Player-1 enter a number:\n");
    scanf("%d",&x);

    printf("Player-2 enter your first guess:\n");
    scanf("%d",&g1);

    switch(g1==x)
    {
        case 1 :
            printf("Right, Player-2 wins!\n");
            break;
            flag=1;

        case 0 :
            printf("Wrong, 2 Chances Left!\nPlayer-2 enter your second guess:\n");
            scanf("%d",&g2);
            switch(g2==x)
            {
                case 1 :
                printf("Right, Player-2 wins!\n");
                break;
                flag=1;

                case 0 :
                printf("Wrong, 1 Chance Left!\nPlayer-2 enter your second guess:\n");
                scanf("%d",&g3);
                switch(g3==x)
                {
                    case 1 :
                    printf("Right, Player-2 wins!\n");
                    break;
                    flag=1;

                    case 0 :
                    printf("Wrong, 0 Chance Left!\nPlayer-1 wins!\n");
                    break;
                }
                break;
            }
            break;
    }
    return 0;
}

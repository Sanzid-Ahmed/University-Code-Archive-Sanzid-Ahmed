#include <stdio.h>

int main()
{

    int Y;
    scanf("%d",&Y);

    switch (Y%4)
    {
    case 0:
        switch (Y % 100)
        {
        case 0:
            switch (Y % 400)
            {
            case 0:
                printf("Yes");
                break;
            default:
                printf("No");
                break;
            }
            break;
        default:
            printf("Yes");
            break;
        }
        break;
    default:
        printf("No");
        break;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        do
        {
            printf("%d", x*x);
            printf(", ");
            x++;
        }
        while(x < y);

        printf("Reached!\n");
    }
    else
    {
        do
        {
            printf("%d", x*x);
            printf(", ");
            x--;
        }
        while(x > y);

        printf("Reached!\n");
    }
    return 0;
}

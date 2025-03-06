#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x < y )
    {
        for (x; x < y; x++)
        {
            printf("%d", x*x);
            printf(", ");
        }
        printf("Reached!\n");
    }
    else
    {
        for (x; x > y; x--)
        {
            printf("%d", x*x);
            printf(", ");
        }
        printf("Reached!\n");
    }
    return 0;
}

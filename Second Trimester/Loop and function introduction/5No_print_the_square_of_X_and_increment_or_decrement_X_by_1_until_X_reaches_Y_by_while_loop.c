#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        while(x < y)
        {
            printf("%d", x*x);
            printf(", ");
            x++;
        }
        printf("Reached!\n");
    }
    else
    {

        while(x > y)
        {
            printf("%d", x*x);
            printf(", ");
            x--;
        }
        printf("Reached!\n");
    }
    return 0;
}

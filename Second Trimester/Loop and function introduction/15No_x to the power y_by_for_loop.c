#include <stdio.h>

int main()
{
    int x, y, r = 1;
    scanf("%d%d", &x, &y);

    for(int i = 1; i <= y; i++)
    {
        r *= x;
    }
    printf("%d", r);

    return 0;
}

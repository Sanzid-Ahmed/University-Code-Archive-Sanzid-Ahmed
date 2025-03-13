#include <stdio.h>

int main()
{
    int x, y, r = 1, i = 1;
    scanf("%d%d", &x, &y);

    while(i <= y)
    {
        r *= x;
        i++;
    }
    printf("%d", r);

    return 0;
}

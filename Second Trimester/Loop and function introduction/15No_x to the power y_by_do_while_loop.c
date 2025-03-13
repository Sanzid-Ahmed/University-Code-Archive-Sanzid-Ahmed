#include <stdio.h>

int main()
{
    int x, y, r = 1, i = 1;
    scanf("%d%d", &x, &y);

    do
    {
        r *= x;
        i++;
    }
    while(i <= y);

    printf("%d", r);

    return 0;
}

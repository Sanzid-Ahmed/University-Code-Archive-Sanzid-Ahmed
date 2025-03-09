#include <stdio.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);

    do
    {
        int b = n % 10;
        c *= 10;
        c += b;
        n /= 10;
    }
    while (n > 0);

    printf("%d", c);

    return 0;
}

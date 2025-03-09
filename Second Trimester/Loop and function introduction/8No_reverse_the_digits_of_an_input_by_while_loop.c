#include <stdio.h>

int main()
{
    int n, c =0;
    scanf("%d", &n);

    while (n > 0)
    {
        int b = n % 10;
        c *= 10;
        c += b;
        n /= 10;
    }
    printf("%d", c);

    return 0;
}

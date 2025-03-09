#include <stdio.h>

int main()
{
    int n, i, b, c = 0;
    scanf("%d", &n);

    for (; n>0; )
    {
        b = n % 10;
        c *= 10;
        c += b;
        n /= 10;
    }
    printf("%d", c);
}

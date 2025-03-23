#include <stdio.h>

int main()
{
    int n, b = 0, a;
    scanf("%d", &n);

    int c = n;

    while (n != 0)
    {
        a = n % 10;
        b *= 10;
        b += a;
        n /= 10;
    }
    if(c == b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

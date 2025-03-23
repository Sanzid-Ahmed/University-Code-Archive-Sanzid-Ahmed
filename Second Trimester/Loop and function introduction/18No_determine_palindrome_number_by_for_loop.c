#include <stdio.h>

int main()
{
    int n, a, b = 0;
    scanf("%d", &n);

    int c = n;

    for(;n != 0;)
    {
        a = n % 10;
        b *= 10;
        b += a;
        n /=10;
    }
    if (c == b)
    {
        printf("yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

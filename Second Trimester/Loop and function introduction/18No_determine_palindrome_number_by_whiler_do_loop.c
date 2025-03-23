#include <stdio.h>

int main()
{
    int n, a, b = 0;
    scanf("%d", &n);

    int c = n;

    do
    {
        a = n % 10;
        b *= 10;
        b += a;
        n /= 10;
    }
    while(n != 0);

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

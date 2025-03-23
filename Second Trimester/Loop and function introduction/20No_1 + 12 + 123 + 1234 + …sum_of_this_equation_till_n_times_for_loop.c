#include <stdio.h>

int main()
{
    int n, sum , b = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        int a = i;
        b *= 10;
        b += a;
        sum += b;
    }
    printf("%d", sum);

    return 0;
}

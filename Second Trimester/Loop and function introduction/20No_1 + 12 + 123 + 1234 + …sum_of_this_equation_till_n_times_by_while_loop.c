#include <stdio.h>

int main()
{
    int n, i = 1, b = 0, sum;
    scanf("%d", &n);

    while(i <= n)
    {
        int a = i;
        b *= 10;
        b += a;
        sum += b;
        i++;
    }
    printf("%d", sum);

    return 0;
}

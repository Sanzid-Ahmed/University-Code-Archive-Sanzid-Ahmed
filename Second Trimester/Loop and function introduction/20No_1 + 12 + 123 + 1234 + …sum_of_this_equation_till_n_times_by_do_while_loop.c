#include <stdio.h>

int main()
{
    int i = 1, n, b=0, sum;
    scanf("%d", &n);

    do
    {
        int a = i;
        b *= 10;
        b += a;
        sum += b;
        i++;
    }
    while(i <= n);

    printf("%d", sum);

    return 0;
}

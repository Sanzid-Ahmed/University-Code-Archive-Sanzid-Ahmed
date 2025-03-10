#include <stdio.h>

int main()
{
    int i = 1, j = 2, n, sum = 0;
    scanf("%d", &n);

    while(i <= n)
    {
        sum += i * i * j;
        j++;
        i++;
    }
    printf("%d", sum);

    return 0;
}

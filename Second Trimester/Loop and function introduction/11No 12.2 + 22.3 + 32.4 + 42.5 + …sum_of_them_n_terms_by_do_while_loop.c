#include <stdio.h>

int main()
{
    int i = 1, j = 2, n, sum = 0;
    scanf("%d", &n);

    do
    {
        sum += i * i * j;
        j++;
        i++;
    }
    while(i <= n);

    printf("%d", sum);

    return 0;
}

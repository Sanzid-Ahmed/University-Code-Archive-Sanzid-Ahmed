#include <stdio.h>

int main()
{
    int i, j, n, sum = 0;
    scanf("%d", &n);

    for(i=1, j=2; i<=n; i++, j++)
    {
        sum += i * i * j; //sum = i * i * j; I forget to wright +=
    }
    printf("%d", sum);

    return 0;
}

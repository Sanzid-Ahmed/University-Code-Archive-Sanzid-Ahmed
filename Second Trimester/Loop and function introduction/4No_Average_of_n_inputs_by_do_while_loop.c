#include <stdio.h>

int main()
{
    double a, n, i = 1, sum = 0;
    scanf("%lf", &n);

    do
    {
        scanf("%lf", &a);
        sum += a;
        i++;
    }
    while (i <= n);

    printf("%lf", sum/n);

    return 0;
}

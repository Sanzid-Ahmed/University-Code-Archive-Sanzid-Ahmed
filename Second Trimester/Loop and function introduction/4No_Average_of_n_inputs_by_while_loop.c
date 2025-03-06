#include <stdio.h>

int main()
{
    double a, n, i=1, sum = 0;
    scanf("%lf", &n);

    while (i<=n)
    {
        scanf("%lf", &a);
        sum += a;
        i++;
    }
    printf("%lf", sum/n);

    return 0;
}

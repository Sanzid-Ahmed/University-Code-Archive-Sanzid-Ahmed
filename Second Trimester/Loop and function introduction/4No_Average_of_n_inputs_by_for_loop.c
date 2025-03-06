#include <stdio.h>

int main()
{
    double i, n, sum = 0;
    scanf("%lf", &n);

    for (i=1; i<=n; i++)
    {
        double a;
        scanf("%lf", &a);

        sum += a;
    }
    printf("%lf", sum/n);
}

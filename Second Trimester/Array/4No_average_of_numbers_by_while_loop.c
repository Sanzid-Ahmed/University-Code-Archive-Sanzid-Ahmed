#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    float a[n];

    while(i < n)
    {
        scanf("%f", &a[i]);
        i++;
    }

    float sum = 0;
    int j = 0;

    while(j < n)
    {
        sum += a[j];
        j++;
    }

    printf("%.2f", sum / n);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    float a[n];

    do
    {
        scanf("%f", &a[i]);
        i++;
    }
    while(i < n);

    int j = 0;
    float sum = 0;

    do
    {
        sum += a[j];
        j++;
    }
    while(j < n);

    printf("%.2f", sum / n);

    return 0;
}

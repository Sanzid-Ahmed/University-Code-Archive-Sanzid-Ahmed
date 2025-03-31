#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float a[n], sum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    for(int j = 0; j < n; j++)
    {
        sum += a[j];
    }


    printf("%.2f", sum / n);

    return 0;
}

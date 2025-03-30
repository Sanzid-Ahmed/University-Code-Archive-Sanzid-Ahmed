#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i, sum = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int j = 0; j < n; j++)
    {
        sum += a[j];
    }
    printf("The sum of the integers: %d", sum);

    return 0;
}

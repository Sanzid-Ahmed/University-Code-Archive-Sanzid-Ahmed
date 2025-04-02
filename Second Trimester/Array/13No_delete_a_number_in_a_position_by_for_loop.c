#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int p;
    scanf("%d", &p);

    for(int j = p; j <= n; j++)
    {
        a[j] = a[j + 1];
    }

    for(int k = 0; k < n - 1; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;

}

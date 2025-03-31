#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }

    int c[n];

    for(int k = 0; k < n; k++)
    {
        c[k] = a[k] + b[k];
        printf("%d", c[k]);
        if(k < n - 1)
            printf(", ");
    }

    return 0;
}

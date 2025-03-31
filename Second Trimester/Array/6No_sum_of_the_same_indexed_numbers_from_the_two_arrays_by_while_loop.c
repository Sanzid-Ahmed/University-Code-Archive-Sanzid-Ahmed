#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n], i = 0, j = 0;

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    while(j < n)
    {
        scanf("%d", &b[j]);
        j++;
    }

    int c[n], k = 0;

    while(k < n)
    {
        c[k] = a[k] + b[k];
        printf("%d", c[k]);
        if(k < n - 1)
        printf(", ");
        k++;
    }

    return 0;
}

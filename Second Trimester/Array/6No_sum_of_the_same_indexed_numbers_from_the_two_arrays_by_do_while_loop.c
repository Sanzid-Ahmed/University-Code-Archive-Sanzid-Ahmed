#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n], i = 0, j = 0;

    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    do
    {
        scanf("%d", &b[j]);
        j++;
    }
    while(j < n);

    int c[n], k = 0;

    do
    {
        c[k] = a[k] + b[k];
        printf("%d", c[k]);
        if(k < n - 1)
        printf(", ");
        k++;
    }
    while(k < n);

    return 0;
}

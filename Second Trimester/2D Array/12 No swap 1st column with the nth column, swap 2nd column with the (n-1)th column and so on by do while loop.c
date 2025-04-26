#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < m);

        i++;
    }
    while(i < n);

    int k = 0;

    do
    {
        int j = 0, t;

        do
        {
            t = a[k][j];
            a[k][j] = a[k][m - 1 - j];
            a[k][m - 1 - j] = t;

            j++;
        }
        while(j < m / 2);

        k++;
    }
    while(k < n);

    int l = 0;

    do
    {
        int j = 0;

        do
        {
            printf("%d", a[l][j]);
            j++;
        }
        while(j < m);

        printf("\n");
        l++;
    }
    while(l < n);

    return 0;
}

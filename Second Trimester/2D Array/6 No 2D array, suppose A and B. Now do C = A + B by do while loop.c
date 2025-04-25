#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], b[n][m], c[n][m];

    int i = 0;

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
        int j = 0;

        do
        {
            scanf("%d", &b[k][j]);
            j++;
        }
        while(j < m);

        k++;
    }
    while(k < n);

    int l = 0;

    do
    {
        int j = 0;

        do
        {
            c[l][j] = a[l][j] + b[l][j];
            printf("%d ",  c[l][j]);
            j++;
        }
        while(j < m);

        printf("\n");

        l++;
    }
    while(l < n);

    return 0;
}

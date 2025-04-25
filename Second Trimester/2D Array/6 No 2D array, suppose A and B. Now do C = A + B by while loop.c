#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], b[n][m], c[n][m];

    int i = 0;

    while(i < n)
    {
        int j = 0;

        while(j < m)
        {
            scanf("%d", &a[i][j]);
            j++;
        }

        i++;
    }

    int k = 0;

    while(k < n)
    {
        int j = 0;

        while(j < m)
        {
            scanf("%d", &b[k][j]);
            j++;
        }

        k++;
    }

    int l = 0;

    while(l < n)
    {
        int j = 0;

        while(j < m)
        {
            c[l][j] = a[l][j] + b[l][j];
            printf("%d ", c[l][j]);

            j++;
        }

        printf("\n");
        l++;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int i = 0, a[n][m];

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
        int j = 0, t;

        while(j < m / 2)
        {
            t = a[k][j];
            a[k][j] = a[k][m - 1 - j];
            a[k][m - 1 - j] = t;

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
            printf("%d ", a[l][j]);
            j++;
        }
        printf("\n");
        l++;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0, a[n][n];

    while(i < n)
    {
        int j = 0;

        while(j < n)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    int k = 0, s = 0;

    while(k < n)
    {
        int j = 0;

        while(j < n)
        {
            if(k == 0 && j <= n / 2)
            s += a[k][j];
            else if(k < n / 2 & j == n - 1)
            s += a[k][j];
            else if((k > 0 && k < n / 2) && j == n / 2)
            s += a[k][j];
            else if(k == n / 2)
            s += a[k][j];
            else if((k > n / 2 && k < n - 1) && j == n / 2)
            s += a[k][j];
            else if(k > n / 2 && j == 0)
            s += a[k][j];
            else if(k == n - 1 && j >= n / 2)
            s += a[k][j];

            j++;
        }
        k++;
    }

    printf("%d", s);

    return 0;
}

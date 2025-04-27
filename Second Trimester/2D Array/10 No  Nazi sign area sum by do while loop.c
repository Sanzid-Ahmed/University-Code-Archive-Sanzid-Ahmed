#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n], i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < n);

        i++;
    }
    while(i < n);

    int k = 0, s = 0;

    do
    {
        int j = 0;

        do
        {
            if(k == 0 && j <= n / 2)
            s += a[k][j];
            else if((k > 0 && k < n / 2) && j  == n / 2)
            s += a[k][j];
            else if(k < n / 2 && j == n - 1)
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
        while(j < n);

        k++;
    }
    while(k < n);

    printf("%d", s);

    return 0;
}

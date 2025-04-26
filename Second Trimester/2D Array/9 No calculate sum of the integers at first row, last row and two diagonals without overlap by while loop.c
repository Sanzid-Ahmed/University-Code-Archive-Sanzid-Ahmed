#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    int i = 0;

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

    int j = 0, s =0;

    while(j < n)
    {
        int k  = 0;

        while(k < n)
        {
            if((j == 0) || (j == n - 1) || (j == k) || (j + k == n - 1 && j != k))
            s += a[j][k];
            k++;
        }
        j++;
    }

    printf("%d", s);

    return 0;

}

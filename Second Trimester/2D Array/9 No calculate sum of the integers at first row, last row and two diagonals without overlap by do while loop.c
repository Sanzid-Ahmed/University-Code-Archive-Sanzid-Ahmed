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

    int j = 0, s = 0;

    do
    {
        int k = 0;

        do
        {
            if((j == 0) || (j == n - 1) || (j == k) || (j + k == n - 1 && j != k))
            s += a[j][k];
            k++;
        }
        while(k < n);

        j++;
    }
    while(j < n);

    printf("%d", s);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int s = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i == 0) || (i == n - 1) || (i == j) || (i + j == n - 1 && i != j))
            s += a[i][j];
        }
    }

    printf("%d", s);

    return 0;
}

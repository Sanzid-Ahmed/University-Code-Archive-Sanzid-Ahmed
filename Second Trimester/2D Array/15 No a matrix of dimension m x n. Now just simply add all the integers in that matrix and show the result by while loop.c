#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], i = 0, s = 0;

    while(i < n)
    {
        int j = 0;

        while(j < m)
        {
            scanf("%d", &a[i][j]);
            s += a[i][j];

            j++;
        }

        i++;
    }

    printf("%d", s);

    return 0;
}

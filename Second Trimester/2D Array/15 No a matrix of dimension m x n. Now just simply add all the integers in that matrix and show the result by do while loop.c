#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], i = 0, s = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            s += a[i][j];
            j++;
        }
        while(j < m);

        i++;
    }
    while(i < n);

    printf("%d", s);

    return 0;
}

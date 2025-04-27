#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int t = a[i][j];

            for(int k = 0; k < n; k++)
            {
                for(int l = 0; l < m; l++)
                {
                    if(i == k && j == l)continue;
                    else if(t == a[k][l] && a[k][l] != -1)
                    a[k][l] = -1;
                }
            }
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

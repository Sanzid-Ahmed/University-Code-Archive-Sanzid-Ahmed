#include <stdio.h>

int main()
{
    int n = 0;
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
            if(i % 2 == 0)
            {
                if(j % 2 != 0)
                s += a[i][j];
            }
            else
            {
                s += a[i][j];
            }
        }
    }

    printf("%d", s);

    return 0;
}

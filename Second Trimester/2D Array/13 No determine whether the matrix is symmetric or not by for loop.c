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

    int a_[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a_[i][j] = a[j][i];
        }
    }

    int f = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a_[i][j] != a[i][j])
            {
                f = 1;
                break;
            }
        }
    }

    if(f == 0)printf("Yes\n");
    else printf("No\n");

    return 0;
}

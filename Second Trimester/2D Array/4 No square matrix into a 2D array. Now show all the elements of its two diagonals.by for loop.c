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

    printf("Major diagonal: ");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            printf("%d ", a[i][j]);
        }
    }


    printf("\nMinor diagonal: ");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i + j == n - 1)
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}

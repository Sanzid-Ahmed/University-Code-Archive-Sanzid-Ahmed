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

    int k = 0;

    printf("Major diagonal: ");

    while(k < n)
    {
        int j = 0;

        while(j < n)
        {
            if(k == j)
            printf("%d ", a[k][j]);
            j++;
        }
        k++;
    }

    int l = 0;

    printf("\nMinor diagonal: ");

    while(l < n)
    {
        int j = 0;

        while(j < n)
        {
            if(l + j == n - 1)
            printf("%d ", a[l][j]);
            j++;
        }
        l++;
    }

    return 0;
}

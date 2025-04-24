#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    int i = 0;

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

    printf("Major diagonal: ");

    int k = 0;

    do
    {
        int j = 0;

        do
        {
            if(k == j)
            printf("%d ", a[k][j]);
            j++;
        }
        while(j < n);

        k++;
    }
    while(k < n);

    printf("\nMinor diagonal: ");

    int l = 0;

    do
    {
        int j = 0;

        do
        {
            if(l + j == n - 1)
            printf("%d ", a[l][j]);
            j++;
        }
        while(j < n);

        l++;
    }
    while(l < n);

    return 0;
}

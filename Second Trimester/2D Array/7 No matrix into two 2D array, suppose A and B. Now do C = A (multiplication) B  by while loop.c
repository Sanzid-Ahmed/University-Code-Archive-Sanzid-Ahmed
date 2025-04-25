#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];

    int i = 0;

    while(i < 3)
    {
        int j = 0;

        while(j < 3)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    int k = 0;

    while(k < 3)
    {
        int j = 0;

        while(j < 3)
        {
            scanf("%d", &b[k][j]);
            j++;
        }
        k++;
    }

    int l = 0;

    while(l < 3)
    {
        int j = 0;

        while(j < 3)
        {
            c[l][j] = 0;

            int m = 0;

            while(m < 3)
            {
                c[l][j] += a[l][m] * b[m][j];
                m++;
            }

            j++;
        }

        l++;
    }

    int n = 0;

    while(n < 3)
    {
        int j = 0;

        while(j < 3)
        {
            printf("%d ", c[n][j]);
            j++;
        }
        printf("\n");
        n++;
    }

    return 0;
}

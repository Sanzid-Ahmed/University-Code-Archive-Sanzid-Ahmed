#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];

    int i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < 3);

        i++;
    }
    while(i < 3);

    int j = 0;

    do
    {
        int k = 0;

        do
        {
            scanf("%d", &b[j][k]);
            k++;
        }
        while(k < 3);

        j++;
    }
    while(j < 3);

    int k = 0;

    do
    {
        int l = 0;

        do
        {
            int m = 0;

            c[k][l] = 0;

            do
            {
                c[k][l] += a[k][m] * b[m][l];
                m++;
            }
            while(m < 3);

            l++;
        }
        while(l < 3);

        k++;
    }
    while(k < 3);

    int l = 0;

    do
    {
        int m = 0;

        do
        {
            printf("%d ", c[l][m]);
            m++;
        }
        while(m < 3);

        l++;
        printf("\n");
    }
    while(l < 3);

    return 0;
}

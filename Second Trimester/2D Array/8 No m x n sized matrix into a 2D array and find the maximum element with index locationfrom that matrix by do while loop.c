#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m];

    int i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < m);

        i++;
    }
    while(i < n);

    int max = a[0][0], r = 0, c = 0, j = 0;

    do
    {
        int k  = 0;

        do
        {
            if(max < a[j][k])
            {
                max = a[j][k];
                r = j;
                c = k;
            }

            k++;
        }
        while(k < m);

        j++;
    }
    while(j < n);

    printf("Max: %d \nLocation: [%d][%d]", max, r, c);

    return 0;
}

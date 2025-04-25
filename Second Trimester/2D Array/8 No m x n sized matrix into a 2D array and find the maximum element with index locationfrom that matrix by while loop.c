#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], i = 0;

    while(i < n)
    {
        int j = 0;

        while(j < m)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    int max = a[0][0], j = 0, r = 0, c = 0;

    while(j < n)
    {
        int k = 0;

        while(k < m)
        {
            if(max < a[j][k])
            {
                max = a[j][k];
                r = j;
                c = k;
            }
            k++;
        }
        j++;
    }

    printf("Max: %d \nLocation: [%d][%d]", max, r, c);

    return 0;
}

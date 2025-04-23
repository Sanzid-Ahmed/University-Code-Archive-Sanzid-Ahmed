#include <stdio.h>

int main()
{
    int r = 3, c = 3, a[r][c];

    int i = 0;

    while(i < r)
    {
        int j = 0;

        while(j < c)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    int ii = 0;

    while(ii < r)
    {
        int j = 0;

        while(j < c)
        {
            printf("%d ", a[ii][j]);
            j++;
        }
        printf("\n");
        ii++;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int r = 3, c = 3, a[r][c];

    int i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < c);

        i++;
    }
    while(i < r);

    int ii = 0;

    do
    {
        int j = 0;

        do
        {
            printf("%d ", a[ii][j]);
            j++;
        }
        while(j < c);

        printf("\n");
        ii++;
    }
    while(ii < r);

    return 0;
}

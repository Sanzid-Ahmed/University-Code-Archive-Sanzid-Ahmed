#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);

    int a[r][c], i = 0;

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

    int k = 0;

    printf("Row - wise: ");

    while(k < r)
    {
        int j = 0;

        while(j < c)
        {
            printf("%d ", a[k][j]);
            j++;
        }
        k++;
    }

    printf("\n\n");
    int l = 0;

    printf("Column - wise: ");

    while(l < c)
    {
        int j = 0;

        while(j < r)
        {
            printf("%d ", a[j][l]);
            j++;
        }
        l++;
    }
}

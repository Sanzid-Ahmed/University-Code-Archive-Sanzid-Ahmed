#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);

    int a[r][c], i = 0;

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

    int k = 0;
    printf("Row - wise: ");

    do
    {
        int j = 0;

        do
        {
            printf("%d ", a[k][j]);
            j++;
        }
        while(j < c);

        k++;
    }
    while(k < r);


    printf("\n\n");


    printf("Column - wise: ");

    int l = 0;

    do
    {
        int j = 0;

        do
        {
            printf("%d ", a[j][l]);
            j++;
        }
        while(j < r);

        l++;
    }
    while(l < c);
}

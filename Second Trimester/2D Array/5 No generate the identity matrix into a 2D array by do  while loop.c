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
            if(i == j)
            a[i][j] = 1;
            else
            a[i][j] = 0;

            j++;
        }
        while(j < n);

        i++;
    }
    while(i < n);

    int k = 0;

    do
    {
        int j = 0;

        do
        {
            printf("%d ", a[k][j]);
            j++;
        }
        while(j < n);

        printf("\n");
        k++;
    }
    while(k < n);

    return 0;
}

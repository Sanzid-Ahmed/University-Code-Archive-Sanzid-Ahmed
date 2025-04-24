#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    int i = 0;

    while(i < n)
    {
        int j = 0;

        while(j < n)
        {
            if(i == j)
            a[i][j] = 1;
            else
            a[i][j] = 0;
            j++;
        }
        i++;
    }

    int k = 0;

    while(k < n)
    {
        int j = 0;

        while(j < n)
        {
            printf("%d ", a[k][j]);
            j++;
        }
        printf("\n");
        k++;
    }

    return 0;
}

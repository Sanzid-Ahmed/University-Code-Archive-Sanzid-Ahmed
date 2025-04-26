#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n], i = 0;

    while(i < n)
    {
        int j = 0;

        while(j < n)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    int s = 0, k = 0;

    while(k < n)
    {
        int j = 0;

        while(j < n)
        {
            if(k % 2 == 0)
            {
                if(j % 2 != 0)
                s += a[k][j];
            }
            else
            s += a[k][j];

            j++;
        }

        k++;
    }

    printf("%d", s);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n], i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < n);

        i++;
    }
    while(i < n);

    int k = 0, s = 0;

    do
    {
        int j = 0;

        do
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
        while(j < n);

        k++;
    }
    while(k < n);

    printf("%d", s);

    return 0;
}

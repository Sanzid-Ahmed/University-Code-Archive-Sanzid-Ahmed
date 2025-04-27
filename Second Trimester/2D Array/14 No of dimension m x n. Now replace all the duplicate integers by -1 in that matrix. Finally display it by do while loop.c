#include <stdio.h>

int main()
{
    int n , m;
    scanf("%d%d", &n, &m);

    int a[n][m], i = 0;

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


    int k = 0;

    do
    {
        int j = 0;

        do
        {
            int l = 0;
            int t = a[k][j];

            do
            {
                int o = 0;

                do
                {
                    if(k == l && j == o)
                    {
                        o++;
                        continue;
                    }
                    else if(t == a[l][o] && a[l][o] != -1)
                    a[l][o] = -1;
                    o++;
                }
                while(o < m);

                l++;
            }
            while(l < n);

            printf("%d  ", a[k][j]);
            j++;
        }
        while(j < m);
        printf("\n");
        k++;
    }
    while(k < n);

    return 0;
}

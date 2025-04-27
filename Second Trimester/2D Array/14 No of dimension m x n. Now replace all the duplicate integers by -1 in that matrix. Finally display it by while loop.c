#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m], i = 0, k = 0;

    while(k < n)
    {
        int j = 0;

        while(j < m)
        {

        scanf("%d", &a[k][j]);
        j++;
        }
        k++;
    }

    while(i < n)
    {
        int j = 0;

        while(j < m)
        {
            int t = a[i][j];
            int k = 0;

            while(k < n)
            {
                int l = 0;

                while(l < m)
                {
                    if(i == k && j == l)
                    {
                        l++;
                        continue;
                    }
                    else if(t == a[k][l] && a[k][l] != -1)
                    a[k][l] = -1;
                    l++;
                }
                k++;
            }
            printf("%d  ", a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

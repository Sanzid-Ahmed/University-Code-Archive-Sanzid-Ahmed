#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n], b[n][n], i = 0;

    while(i < n)
    {
        int j = 0;

        while(j < n)
        {
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
            j++;
        }
        i++;
    }

    int k = 0, f = 0;

    while(k < n)
    {
        int j = 0;

        while(j < n)
        {
            if(b[k][j] != a[k][j])
            {
                f = 1;
                break;
            }
            j++;
        }
        k++;
    }

    if(f == 0)
    printf("Yes");
    else
    printf("No");

    return 0;
}

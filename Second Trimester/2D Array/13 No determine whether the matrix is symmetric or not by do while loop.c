#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n], b[n][n], i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
            j++;
        }
        while(j < n);

        i++;
    }
    while(i < n);

    int k = 0, f = 0;

    do
    {
        int j = 0;

        do
        {
            if(a[k][j] != b[k][j])
            {
                f = 1;
                break;
            }
            j++;
        }
        while(j < n);

        k++;
    }
    while(k < n);

    if(f == 0)
    printf("Yes");
    else
    printf("No");

    return 0;
}

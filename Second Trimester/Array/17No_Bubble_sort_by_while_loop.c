#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0, a[n];

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int j = 0;

    while(j < n - 1)
    {
        int k = 0;

        while(k < n - 1 - j)
        {
            if(a[k] > a[k+1])
            {
                int t = a[k];
                a[k] = a[k + 1];
                a[k + 1] = t;
            }

            k++;
        }

        j++;
    }

    int l = 0;

    while(l < n)
    {
        printf("%d ", a[l]);
        l++;
    }

    return 0;
}

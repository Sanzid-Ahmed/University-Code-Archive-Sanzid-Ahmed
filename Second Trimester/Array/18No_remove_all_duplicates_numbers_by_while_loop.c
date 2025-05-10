#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0, c = 0;

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int j = 0;

    while(j < n - c)
    {
        int k = j + 1;

        while(k < n - c)
        {
            if(a[j] == a[k])
            {
                int l = k;

                while(l < n - c)
                {
                    a[k] = a[k + 1];
                    l++;
                }
                c++;
            }
            k++;
        }
        j++;
    }

    int k = 0;

    while(k < n - c)
    {
        printf("%d ", a[k]);
        k++;
    }

    return 0;
}

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
            a[k] = '\0';

            k++;
        }

        int l = j + 1;

        while(l < n - c)
        {
            if(a[l] == '\0')
            {
                a[l] = a[l + 1];
                c++;
            }
            l++;
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

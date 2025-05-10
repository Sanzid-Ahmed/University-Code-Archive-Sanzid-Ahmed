#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0;

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }


    int j = 0;

    while(j < n)
    {
        int k = j, m = j;

        while(k < n)
        {
            if(a[m] > a[k])
            m = k;

            k++;
        }

        if(m != j)
        {
            int t = a[m];
            a[m] = a[j];
            a[j] = t;
        }

        j++;
    }

    int k = 0;

    while(k < n)
    {
        printf("%d ", a[k]);
        k++;
    }

    return 0;
}

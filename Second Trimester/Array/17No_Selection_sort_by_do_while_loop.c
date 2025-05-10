#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0;

    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    int j = 0;

    do
    {
        int k = j, m = j;

        do
        {
            if(a[m] > a[k])
            m = k;

            k++;
        }
        while(k < n);

        if(m != j)
        {
            int t = a[m];
            a[m] = a[j];
            a[j] = t;
        }

        j++;
    }
    while(j < n);

    int k = 0;

    do
    {
        printf("%d ", a[k]);
        k++;
    }
    while(k < n);

    return 0;
}

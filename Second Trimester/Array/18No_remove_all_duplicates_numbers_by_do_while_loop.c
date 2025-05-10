#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0, c = 0;

    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    int j = 0;

    do
    {
        int k = j + 1;

        do
        {
            if(a[j] == a[k])
            {
                int l = 0;

                do
                {
                    a[l] = a[l + 1];
                    l++;
                }
                while(l < n - c);

                c++;
            }

            k++;
        }
        while(k < n - c);

        j++;
    }
    while(j < n - c);

    int k = 0;

    do
    {
        printf("%d ", a[k]);
        k++;
    }
    while(k < n - c);

    return 0;
}

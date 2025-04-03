#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], ii = 0;

    do
    {
        scanf("%d", &a[ii]);
        ii++;
    }
    while(ii < n);

    int i = 0;

    do
    {
        int j = 0;

        do
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            j++;
        }
        while(j < n - 1 - i);

        i++;
    }
    while(i < n - 1);

    int iii = 0;

    do
    {
        printf("%d", a[iii]);
        iii++;
    }
    while(iii < n);

    return 0;
}

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

    int p;
    scanf("%d", &p);

    int j = p;

    while(j < n)
    {
        a[j] = a[j + 1];
        j++;
    }

    int k = 0;

    while(k < n - 1)
    {
        printf("%d ", a[k]);
        k++;
    }

    return 0;
}

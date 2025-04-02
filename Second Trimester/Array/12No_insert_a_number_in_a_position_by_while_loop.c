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

    int num, p;
    scanf("%d%d", &num, &p);

    int j = n;

    while(j >= p)
    {
        a[j] = a[j - 1];
        j--;
    }

    a[p] = num;

    int k = 0;

    while(k <= n)
    {
        printf("%d ", a[k]);
        k++;
    }

    return 0;
}

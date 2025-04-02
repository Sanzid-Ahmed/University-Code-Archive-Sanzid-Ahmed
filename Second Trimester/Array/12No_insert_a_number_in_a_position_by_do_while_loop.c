#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 1], i = 0;

    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    int j = n, p, num;

    scanf("%d%d", &num, &p);

    do
    {
        a[j] = a[j - 1];
        j--;
    }
    while(j > p);

    a[p] = num;

    int k = 0;

    do
    {
        printf("%d ", a[k]);
        k++;
    }
    while(k <= n);

    return 0;
}

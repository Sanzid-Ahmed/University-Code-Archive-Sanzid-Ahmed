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

    int p;
    scanf("%d", &p);

    int j = p;

    do
    {
        a[j] = a[j + 1];
        j++;
    }
    while(j < n);

    int k = 0;

    do
    {
        printf("%d ", a[k]);
        k++;
    }
    while(k < n - 1);

    return 0;
}

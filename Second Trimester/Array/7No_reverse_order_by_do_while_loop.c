#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0, a[n];

    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    int j = 0, k = n - 1, temp;

    do
    {
        temp = a[j];
        a[j] = a[k];
        a[k] = temp;

        j++;
        k--;
    }
    while(j < k);

    int l = 0;

    do
    {
        printf("%d ", a[l]);
        l++;
    }
    while(l < n);

    return 0;
}

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

    int k = n - 1, j = 0, temp;

    while(j < k)
    {
        temp = a[j];
        a[j] = a[k];
        a[k] = temp;

        j++;
        k--;
    }

    int l = 0;

    while(l < n)
    {
        printf("%d ", a[l]);
        l++;
    }

    return 0;
}

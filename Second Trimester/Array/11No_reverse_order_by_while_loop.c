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

    int j = 0, k = n - 1;

    printf("Array A:");
    while(j < n)
    {
        printf("%d ", a[j]);
        j++;
    }

    printf("\nArray B:");
    while(k >= 0)
    {
        printf("%d ", a[k]);
        k--;
    }

    return 0;
}

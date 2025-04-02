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

    int j = 0, k = n - 1;

    printf("Array A:");

    do
    {
        printf("%d ", a[j]);
        j++;
    }
    while(j < n);

    printf("\nArray B:");
    do
    {
        printf("%d ", a[k]);
        k--;
    }
    while(k >= 0);

    return 0;
}

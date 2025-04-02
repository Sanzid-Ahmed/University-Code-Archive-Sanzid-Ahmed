#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array A:");
    for(int j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }

    printf("\n");

    printf("Array B:");
    for(int k = n - 1; k >= 0; k--)
    {
        printf("%d ", a[k]);
    }

    return 0;
}

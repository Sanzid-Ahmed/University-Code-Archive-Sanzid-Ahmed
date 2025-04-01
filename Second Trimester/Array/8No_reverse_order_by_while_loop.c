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

    int j = 0, min = a[0], max = a[0], mini, maxi;

    while(j < n)
    {
        if(a[j] > max)
        {
            max = a[j];
            maxi = j;
        }

        if(a[j] < min)
        {
            min = a[j];
            mini = j;
        }

        j++;
    }

    printf("Max: %d, Index: %d\n", max, maxi);
    printf("Min: %d, Index: %d\n", min, mini);

    return 0;
}

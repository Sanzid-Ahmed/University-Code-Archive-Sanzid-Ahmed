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

    int j = 0;
    int min = a[0], max = a[0], mini, maxi;

    do
    {
        if(max < a[j])
        {
            max = a[j];
            maxi = j;
        }

        if(min > a[j])
        {
            min = a[j];
            mini = j;
        }

        j++;
    }
    while(j < n);

    printf("Max: %d, Index: %d\n", max, maxi);
    printf("Min: %d, Index: %d\n", min, mini);

    return 0;
}

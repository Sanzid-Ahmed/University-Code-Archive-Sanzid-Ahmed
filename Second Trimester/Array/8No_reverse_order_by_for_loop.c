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

    int min = a[0], max = a[0];
    int mini, maxi;

    for(int j = 0; j < n; j++)
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
    }

    printf("Max: %d, index: %d\n", max, maxi);
    printf("Min: %d, index: %d\n", min, mini);

    return 0;
}

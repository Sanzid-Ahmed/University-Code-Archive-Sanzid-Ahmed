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

    int sum = 0, j = 0;

    while(j < n)
    {
        if(j % 2 == 0)
        sum += a[j];
        j++;
    }

    printf("%d", sum);

    return 0;
}

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

    int j = 0;
    while(j < n)
    {
        if(j % 2 != 0)
        a[j] = 0;
        printf("%d ", a[j]);
        j++;
    }

    return 0;
}

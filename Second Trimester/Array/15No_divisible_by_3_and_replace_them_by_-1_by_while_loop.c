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
        if(a[j] % 3 == 0)
        a[j] = -1;
        printf("%d ", a[j]);
        j++;
    }

    return 0;
}

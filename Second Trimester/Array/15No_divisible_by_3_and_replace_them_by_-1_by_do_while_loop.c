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

    do
    {
        if(a[j] % 3 == 0)
        a[j] = -1;
        printf("%d ", a[j]);
        j++;
    }
    while(j < n);

    return 0;
}

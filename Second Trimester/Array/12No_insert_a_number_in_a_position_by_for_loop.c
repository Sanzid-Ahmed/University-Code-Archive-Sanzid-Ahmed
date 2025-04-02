#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int num, p;
    scanf("%d%d", &num, &p);

    for(int j = n; j > p; j--)
    {
        a[j] = a[j - 1];
    }

    a[p]= num;

    for(int k = 0; k <= n; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}

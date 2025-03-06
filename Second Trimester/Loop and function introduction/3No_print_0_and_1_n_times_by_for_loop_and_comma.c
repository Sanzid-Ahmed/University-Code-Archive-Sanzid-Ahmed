#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        printf("%d", i%2);
        if (i<n)
        {
            printf(", ");
        }
    }
    return 0;
}

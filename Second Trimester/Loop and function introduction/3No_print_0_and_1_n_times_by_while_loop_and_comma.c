#include <stdio.h>

int main()
{
    int i=1, n;
    scanf("%d", &n);

    while (i<=n)
    {
        printf("%d", i%2);
        if (i<n)
        printf(", ");
        i++;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i=1, n;
    scanf("%d", &n);

    do
    {
        printf("%d", i%2);
        if (i<n)
        printf(", ");
        i++;
    }
    while (i<=n);

    return 0;
}

#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, r = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        r = a + b;
        printf("%d", b); // if i print r then I can not get 1, 1 for get this i need to print b
        a = b;
        b = r;
        if (i < n)
            printf(", ");
    }
    return 0;
}

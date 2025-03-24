#include <stdio.h>

int main()
{
    int n, i = 1, a, b;
    scanf("%d", &n);

    while(i <= n)
    {
        a = 1;
        b = i;
        while(a <= i)
        {
            printf("%d", b);
            a++;
            b++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

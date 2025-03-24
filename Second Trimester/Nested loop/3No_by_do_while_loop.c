#include <stdio.h>

int main()
{
    int n, i = 1, a, b;
    scanf("%d", &n);

    do
    {
        a = 1;
        b = i;
        do
        {
            printf("%d", b);
            a++;
            b++;
        }
        while(a <= i);

        printf("\n");
        i++;
    }
    while(i <= n);

    return 0;
}

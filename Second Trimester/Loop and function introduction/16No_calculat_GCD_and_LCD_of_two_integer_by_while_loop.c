#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int c = a, d = b;

    while(a % b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    printf("GCD: %d\n", b);

    if(c > d)
    {
        int e = c;
        while(e % c != 0 || e % d != 0)
        {
            e++;
        }
        printf("LCM: %d", e);
    }
    else
    {
        int e = d;
        while(e % c != 0 || e % d != 0)
        {
            e++;
        }
        printf("LCM: %d", e);
    }

    return 0;
}

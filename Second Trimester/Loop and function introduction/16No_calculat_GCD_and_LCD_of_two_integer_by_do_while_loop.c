#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int c = a, d = b, e;

    do
    {
        int t = a % b;
        a = b;
        b = t;
    }
    while(a % b != 0);

    printf("GCD: %d\n", b);

    if(c > d)
    {
        e = c;
        do
        {
            e++;
        }
        while(e % c != 0 || e % d != 0);

        printf("LCM: %d", e);
    }
    else
    {
         e = d;
        do
        {
            e++;
        }
        while(e % c != 0 || e % d != 0);

        printf("LCM: %d", e);2
    }

    return 0;
}

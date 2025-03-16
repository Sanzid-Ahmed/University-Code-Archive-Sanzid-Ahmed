#include <stdio.h>

int main()
{
    int a, b, e;
    scanf("%d%d", &a, &b);

    int c = a, d = b;
    for (; a % b != 0;)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    printf("GCD: %d\n",b);

    if(c > d)
    {
        e = c;
        for (;e % c != 0 || e % d !=0;)
        {
            e++;
        }
        printf("LCM: %d",e);
    }
    else
    {
        e = d;
        for (;e % c != 0 || e % d !=0;)
        {
            e++;
        }
        printf("LCM: %d",e);
    }


    return 0;
}

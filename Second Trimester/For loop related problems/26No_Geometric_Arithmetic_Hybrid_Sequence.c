#include <stdio.h>

int main()
{
    int a=2, b=5, c, sum=0, n, i;
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        c=a*b;
        sum+=c;
        b+=3;
        a*=2;
    }
    printf("%d",sum);

    return 0;
}

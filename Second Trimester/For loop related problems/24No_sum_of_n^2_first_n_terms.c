#include <stdio.h>

int main()
{
    int a, n, i, sum=0;
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        a=i*i;
        sum+=a;
    }
    printf("%d",sum);

    return 0;
}

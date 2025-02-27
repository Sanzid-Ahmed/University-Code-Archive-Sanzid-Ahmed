#include <stdio.h>

int main()
{
    int a=10, n, i, sum=0;
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        sum+=a;
        a*=3;
    }
    printf("%d",sum);

    return 0;
}

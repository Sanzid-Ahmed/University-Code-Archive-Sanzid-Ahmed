#include <stdio.h>

int main()
{
    int sum, n, i;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}

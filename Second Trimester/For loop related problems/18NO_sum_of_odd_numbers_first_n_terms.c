#include <stdio.h>

int main()
{
    int sum, a=1, n, i;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        sum+=a;
        a+=2;
    }
    printf("%d",sum);

    return 0;
}

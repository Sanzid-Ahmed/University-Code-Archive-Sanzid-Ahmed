#include <stdio.h>

int main()
{
    int f=1, n, i;
    scanf("%d",&n);

    for (i=n; i>0; i--)
    {
        f*=i;
    }
    printf("%d",f);

    return 0;
}

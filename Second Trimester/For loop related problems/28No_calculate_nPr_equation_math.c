#include <stdio.h>

int main()
{
    int n , r, a, b=1, c=1, i;
    scanf("%d%d",&n,&r);

    for (i=n; i>0; i--)
    {
        b*=i;
    }
    for (a=n-r; a>0; a--)
    {
        c*=a;
    }
        printf("%d",b / c);

    return 0;
}

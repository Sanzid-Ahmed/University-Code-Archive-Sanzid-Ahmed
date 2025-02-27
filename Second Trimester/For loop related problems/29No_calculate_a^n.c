#include <stdio.h>

int main()
{
    int a, n, i, b=1;
    scanf("%d%d",&a,&n);

    for(i=n; i>0; i--)
    {
        b*=a;
    }
    printf("%d",b);
    return 0;
}

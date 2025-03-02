#include <stdio.h>

int main()
{
    int a, d=0, b=0;
    scanf("%d",&a);

    while(a>0)
    {
        b=a%10;
        d+=b;
        a=a/10;
    }
    printf("%d",d);

    return 0;
}

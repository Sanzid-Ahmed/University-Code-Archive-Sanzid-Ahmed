#include <stdio.h>

int main()
{
    int n, i=1, a=1;
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d ",a);
        a+=2;
        i++;
    }
    return 0;
}

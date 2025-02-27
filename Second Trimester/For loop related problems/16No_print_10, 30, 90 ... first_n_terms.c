#include <stdio.h>

int main()
{
    int n, i, a=10;
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("%d ",a);
        a*=3;
    }
    return 0;
}

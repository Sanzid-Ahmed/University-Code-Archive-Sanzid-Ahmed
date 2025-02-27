#include <stdio.h>

int main()
{
    int n, i, a=5;
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("%d ",a);
        a*=2;
    }
    return 0;
}

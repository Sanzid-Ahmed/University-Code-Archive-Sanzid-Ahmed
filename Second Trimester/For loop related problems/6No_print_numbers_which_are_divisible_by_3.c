#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);

    for(i=3; i<=n; i+=3)
    {
        printf("%d ",i);
    }
    return 0;
}

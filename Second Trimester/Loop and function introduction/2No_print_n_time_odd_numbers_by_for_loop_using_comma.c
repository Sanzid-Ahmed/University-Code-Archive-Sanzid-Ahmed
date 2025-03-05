#include <stdio.h>

int main()
{
    int i, n, a;
    scanf("%d",&n);

    for(i=0,a=1; i<n; i++,a+=2)
    {
        printf("%d",a);
        if(i<n-1)
        printf(", ");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a=1, sum=0, n, i;
    scanf("%d",&n);

    for(i=0; i<n; i++,a++)
    {
        sum+=a*3;
    }
    printf("%d",sum);

    return 0;
}

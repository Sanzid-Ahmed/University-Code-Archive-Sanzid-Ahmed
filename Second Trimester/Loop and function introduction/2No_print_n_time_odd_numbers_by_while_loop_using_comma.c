#include <stdio.h>

int main()
{
    int a=1, n, i=0;
    scanf("%d",&n);

    while(i<n)
    {
        printf("%d",a);
        if (i<n-1)
            printf(", ");
        a+=2;
        i++;
    }
    return 0;
}

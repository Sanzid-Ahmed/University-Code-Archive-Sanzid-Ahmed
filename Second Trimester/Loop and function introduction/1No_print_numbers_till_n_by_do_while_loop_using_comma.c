#include <stdio.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);

    do
    {
        printf("%d",i);
        if (i<n)
        printf(", ");
        i++;
    }
    while(i<=n);
}

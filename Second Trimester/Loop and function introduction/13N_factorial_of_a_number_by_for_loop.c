#include <stdio.h>

int main()
{
    int n, f = 1;
    scanf("%d", &n);

    printf("%d! = ",n);

    for(int i = n; i > 0; i--)
    {
        printf("%d ",i);
        f *= i;
        if (i > 1)
        printf("X ");
        else
        printf("= ");
    }
    printf("%d", f);

    return 0;
}

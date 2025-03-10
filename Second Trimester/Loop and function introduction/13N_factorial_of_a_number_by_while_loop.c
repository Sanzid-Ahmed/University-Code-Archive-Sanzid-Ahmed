#include <stdio.h>

int main()
{
    int n, f = 1;
    scanf("%d", &n);

    int i = n;

    printf("%d! = ", n);

    while(i > 0)
    {
        printf("%d ",i);
        f *= i;
        if(i > 1)
        printf("X ");
        else
        printf("= ");
        i--;
    }
    printf("%d", f);

    return 0;
}

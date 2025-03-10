#include <stdio.h>

int main()
{
    int n, f = 1;
    scanf("%d", &n);

    int i = n;

    printf("%d! = ", n);

    do
    {
        printf("%d ", i);
        f *= i;
        i--;
        if(i >= 1) // if(i > 1) this is not work because it check condition after decrement
        printf("X ");
        else
        printf("= ");
    }
    while(i > 0);
    printf("%d", f);

    return 0;
}

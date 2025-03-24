#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1, b = n - 1; i <= n; i++, b--)
    {
        for(int k = b; k > 0; k--)
        {
            printf(" ");
        }
        for(int j = 1, a = i; j <= i; j++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}

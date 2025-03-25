#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1, a = n; j <= i; j++, a--)
        {
            printf("%d", a);
        }
        printf("\n");
    }
}

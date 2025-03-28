#include <stdio.h>

int main()
{
    int n;
    for(;n % 2 == 0;)
    {
        scanf("%d", &n);
    }

    for(int i = 1; i <= n; i++)
    {
        if(i == 1 || i == n)
        {
            for(int j = 1; j <= n; j++)
            {
                printf("Z");
            }
            printf("\n");
        }
        else
        {
            for(int space = i; space < n; space++)
            {
                printf(" ");
            }
            printf("Z");
            printf("\n");
        }
    }
}

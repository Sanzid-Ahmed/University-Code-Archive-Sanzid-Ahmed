#include <stdio.h>

int main()
{
    int n;
    while(n % 2 == 0)
    {
        scanf("%d", &n);
    }

    int i = 1;
    while(i <= n)
    {
        int j = 1;

        if(i % 2 == 0)
        {
            printf("*");
            while(j <= n - 2)
            {
                printf(" ");
                j++;
            }
            printf("*");
        }
        else
        {
            while(j <= n)
            {
                printf("*");
                j++;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}

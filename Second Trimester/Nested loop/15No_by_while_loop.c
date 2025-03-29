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
        int j = 1, space = i;
        if(i == 1 || i == n)
        {
            while(j <= n)
            {
                printf("Z");
                j++;
            }
        }
        else
        {
            while(space < n)
            {
                printf(" ");
                space++;
            }
            printf("Z");
        }
        printf("\n");
        i++;
    }
}

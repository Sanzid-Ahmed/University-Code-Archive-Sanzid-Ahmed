#include <stdio.h>

int main()
{
    int n;
    do
    {
    scanf("%d", &n);
    }
    while(n % 2 == 0);

    int i = 1;

    do
    {
        int j = 1;

        if(i % 2 == 0)
        {
            printf("*");
            do
            {
                printf(" ");
                j++;
            }
            while(j <= n - 2);
            printf("*");
        }
        else
        {
            do
            {
                printf("*");
                j++;
            }
            while(j <= n);
        }

        printf("\n");
        i++;
    }
    while(i <= n);
}

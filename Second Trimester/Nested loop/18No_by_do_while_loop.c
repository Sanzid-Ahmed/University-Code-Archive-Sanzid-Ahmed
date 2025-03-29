#include <stdio.h>

int main()
{
    int n, i = 1;
    do
    {
        scanf("%d", &n);
    }
    while(n % 2 == 0);

    int nn = ((n - 1) / 2) + 1;

    do
    {
        if(i == nn)
        {
            int j = 1;
            do
            {
                printf("H");
                j++;
            }
            while(j <= n);
        }
        else
        {
            printf("H");
            int k = 1;
            do
            {
                printf(" ");
                k++;
            }
            while(k < n - 1);
            printf("H");
        }
        printf("\n");
        i++;
    }
    while(i <= n);

    return 0;
}

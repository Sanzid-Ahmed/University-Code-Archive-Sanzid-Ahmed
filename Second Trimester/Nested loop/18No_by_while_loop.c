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

    while(i <= n)
    {
        if(i == nn)
        {
            int j = 1;
            while(j <= n)
            {
                printf("H");
                j++;
            }
        }
        else
        {
            printf("H");
            int space = 1;
            while(space < n - 1)
            {
                printf(" ");
                space++;
            }
            printf("H");
        }
        printf("\n");
        i++;
    }
    return 0;
}

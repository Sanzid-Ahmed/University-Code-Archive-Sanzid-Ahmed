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
        int j = 1, space = i;
        if(i == 1 || i == n)
        {
            do
            {
                printf("Z");
                j++;
            }
            while(j <= n);
        }
        else
        {
            do
            {
                printf(" ");
                space++;
            }
            while(space <= n - 1);
            printf("Z");
        }
        printf("\n");
        i++;
    }
    while(i <= n);

    return 0;
}

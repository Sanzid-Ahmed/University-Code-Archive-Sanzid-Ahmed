#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int space = i;
        while(space <= n)
        {
            printf(" ");
            space++;
        }

        int j = 1;
        while(j <= i)
        {
            printf("*");
            j++;
        }

        int k = 1;
        while(k < i)
        {
            printf("*");
            k++;
        }
        printf("\n");

        i++;
    }
    return 0;
}

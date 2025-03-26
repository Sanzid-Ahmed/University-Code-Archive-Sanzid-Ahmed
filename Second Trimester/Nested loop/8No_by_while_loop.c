#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int j = i;

        while(j <= n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

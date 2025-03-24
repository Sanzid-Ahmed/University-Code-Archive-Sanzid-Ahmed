#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    do
    {
    int j = 1;
        do
        {
            printf("%d", j);
            j++;
        }
        while(j <= n);

        printf("\n");
        i++;
    }
    while(i <= n);

    return 0;
}

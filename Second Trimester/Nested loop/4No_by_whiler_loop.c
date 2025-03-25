#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int  k = i;
        while(k < n)
        {
            printf(" ");
            k++;
        }

        int j = 1;
        while(j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

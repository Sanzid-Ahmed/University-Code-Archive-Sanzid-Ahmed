#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for(int k = i; k < n; k++)
        {
            printf(" ");
        }
        for(int k = i + 1; k < n; k++)
        {
            printf(" ");
        }
        if(i == n)
        {
            for(int j = i-1; j > 0; j--)
            {
            printf("%d", j);
            }
        }
        else
        {
            for(int j = i; j > 0; j--)
            {
            printf("%d", j);
            }
        }
        printf("\n");
    }
}

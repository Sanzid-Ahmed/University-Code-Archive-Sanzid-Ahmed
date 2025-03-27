#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nn = (n - 1) / 2;

    for(int i = 1, ii = 1; i <= n; i+=2, ii++)
    {
        for(int space = ii; space <= nn; space++)
        {
            printf(" ");
        }
        for(int j = 1; j <= ii; j++)
        {
            printf("*");
        }
        for(int k = 1; k < ii; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= nn; i++)
    {
        for(int space = 1; space <= i; space++)
        {
            printf(" ");
        }
        for(int j = i; j <= nn; j++)
        {
            printf("*");
        }
        for(int j = i; j < nn; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

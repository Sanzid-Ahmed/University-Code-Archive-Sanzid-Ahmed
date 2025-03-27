#include <stdio.h>

int main()
{
    int n, i = 1, ii = 1, iii = 1, iv = 1;
    scanf("%d", &n);

    int nn = (n - 1) / 2;

    while(i <= n)
    {
        int space = ii;
        while(space <=  nn)
        {
            printf(" ");
            space++;
        }

        int j = 1;
        while(j <= ii)
        {
            printf("*");
            j++;
        }

        int k = 1;
        while(k < ii)
        {
            printf("*");
            k++;
        }
        printf("\n");

        ii++;
        i+=2;
    }

    while(iii < n)
    {
        int space = 1;
        while(space <= iv)
        {
            printf(" ");
            space++;
        }

        int j = iv;
        while(j <= nn)
        {
            printf("*");
            j++;
        }

        int k = iv;
        while(k < nn)
        {
            printf("*");
            k++;
        }
        printf("\n");
        iii+=2;
        iv++;
    }
}

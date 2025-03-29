#include <stdio.h>

int main()
{
    int n, i = 1, ii = 1, iii = 1;

    while(n % 2 == 0)
    {
        printf("please enter an odd number:");
        scanf("%d", &n);
    }

    int nn = ((n - 1) / 2) + 1;

    while(i < nn)
    {
        int space1 = i;
        while(space1 < nn)
        {
            printf(" ");
            space1++;
        }
        printf("$");

        int space2 = 3;
        while(space2 <= i)
        {
            printf(" ");
            space2++;
        }
        if(i > 1)
            printf("$");

        int space3 = 3;
        while(space3 <= i)
        {
            printf(" ");
            space3++;
        }
        if(i > 1)
            printf("$");
        i++;
        printf("\n");
    }
    while(ii <= n)
    {
        printf("$");
        ii++;
    }
    printf("\n");

    while(iii < nn)
    {
        int space4 = 1;
        while(space4 <= iii)
        {
            printf(" ");
            space4++;
        }
        printf("$");

        int space5 = iii;
        while(space5 < nn - 2)
        {
            printf(" ");
            space5++;
        }
        if(iii < nn - 1)
            printf("$");

        int space6 = iii;
        while(space6 < nn - 2)
        {
            printf(" ");
            space6++;
        }
        if(iii < nn - 1)
            printf("$");

        iii++;
        printf("\n");
    }
    return 0;
}

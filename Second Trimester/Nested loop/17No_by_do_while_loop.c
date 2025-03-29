#include <stdio.h>

int main()
{
    int n, i = 1, ii = 1, iii = 1;
    do
    {
        scanf("%d", &n);
    }
    while(n % 2 == 0);

    int nn = ((n - 1) / 2) + 1;

    do
    {
        int space1 = i;
        do
        {
            printf(" ");
            space1++;
        }
        while(space1 <= nn - 1);
        printf("$");

        int space2 = 3;
        do
        {
            if(i > 2)
            printf(" ");
            space2++;
        }
        while(space2 <= i);
        if(i > 1)
        printf("$");

        int space3 = 3;
        do
        {
            if(i > 2)
            printf(" ");
            space3++;
        }
        while(space3 <= i);
        if(i > 1)
        printf("$");

        printf("\n");
        i++;
    }
    while(i < nn);

    do
    {
        printf("$");
        ii++;
    }
    while(ii <= n);
    printf("\n");

    do
    {
        int space4 = 1;
        do
        {
            printf(" ");
            space4++;
        }
        while(space4 <= iii);
        printf("$");

        int space5 = iii;
        do
        {
            if(iii < nn - 2)
            printf(" ");
            space5++;
        }
        while(space5 < nn - 2);
        if(iii < nn - 1)
        printf("$");

        int space6 = iii;
        do
        {
            if(iii < nn - 2)
            printf(" ");
            space6++;
        }
        while(space6 < nn - 2);
        if(iii < nn - 1)
        printf("$");

        iii++;
        printf("\n");
    }
    while(iii < nn);
}

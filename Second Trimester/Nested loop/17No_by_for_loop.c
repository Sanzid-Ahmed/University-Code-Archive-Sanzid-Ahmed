#include <stdio.h>

int main()
{
    int n;
    for(; n % 2 == 0;)
    {
        printf("please enter an odd number:");
        scanf("%d", &n);
    }

    int nn = ((n - 1) / 2) + 1;

    for(int i = 1; i < nn; i++)
    {
        for(int space1 = i; space1 < nn; space1++)
        {
            printf(" ");
        }
        printf("$");
        for(int space2 = 3; space2 <= i; space2++)
        {
            printf(" ");
        }
        if(i > 1)
        printf("$");
        for(int space3 = 3; space3 <= i; space3++)
        {
            printf(" ");
        }
        if(i > 1)
        printf("$");
        printf("\n");
    }
    for(int ii = 1; ii <= n; ii++)
    {
        printf("$");
    }
    printf("\n");
    for(int iii = 1; iii < nn; iii++)
    {
        for(int space4 = 1; space4 <= iii; space4++)
        {
            printf(" ");
        }
        printf("$");
        for(int space5 = iii; space5 < nn - 2; space5++)
        {
            printf(" ");
        }
        if(iii < nn - 1)
        printf("$");
        for(int space6 = iii; space6 < nn - 2; space6++)
        {
            printf(" ");
        }
        if(iii < nn - 1)
        printf("$");
        printf("\n");
    }



}

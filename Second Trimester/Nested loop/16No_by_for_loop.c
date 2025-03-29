#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int mid = ((n - 1) / 2) + 1;

    for(int i = 1; i <= mid; i++)
    {
        for(int space1 = 1; space1 < i; space1++)
        {
            printf(" ");
        }
        printf("*");

        for(int space2 = i; space2 < mid; space2++)
        {
            printf(" ");
        }
        for(int space3 = i; space3 < mid - 1; space3++)
        {
            printf(" ");
        }
        if(i != mid)
        printf("*");

        printf("\n");
    }

    for(int ii = 1; ii < mid; ii++)
    {
        for(int space4 = ii; space4 < mid - 1; space4++)
        {
            printf(" ");
        }
        printf("*");

        for(int space5 = 1; space5 <= ii; space5++)
        {
            printf(" ");
        }
        for(int space6 = 1; space6 < ii; space6++)
        {
            printf(" ");
        }
        printf("*");

        printf("\n");
    }
}

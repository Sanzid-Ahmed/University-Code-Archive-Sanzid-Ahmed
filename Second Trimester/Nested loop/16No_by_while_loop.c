#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1, mid = ((n - 1) / 2) + 1;

    while(i <= mid)
    {
        int space1 = 1;
        while(space1 < i)
        {
            printf(" ");
            space1++;
        }
        printf("*");

        int space2 = i;
        while(space2 < mid)
        {
            printf(" ");
            space2++;
        }

        int space3 = i;
        while(space3 < mid - 1)
        {
            printf(" ");
            space3++;
        }
        if(i != mid)
        printf("*");

        printf("\n");
        i++;
    }

    int ii = 1;
    while(ii < mid)
    {
        int space4 = ii;
        while(space4 < mid - 1)
        {
            printf(" ");
            space4++;
        }
        printf("*");

        int space5 = 1;
        while(space5 <= ii)
        {
            printf(" ");
            space5++;
        }

        int space6 = 1;
        while(space6 < ii)
        {
            printf(" ");
            space6++;
        }
        printf("*");

        printf("\n");
        ii++;
    }
    return 0;
}

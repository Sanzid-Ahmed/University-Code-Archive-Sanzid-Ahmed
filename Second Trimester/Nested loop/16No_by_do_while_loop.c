#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1, mid = ((n - 1) / 2) + 1;

    do
    {
        int space1 = 1;
        do
        {
            if(i != 1)
            printf(" ");
            space1++;
        }
        while(space1 < i);
        printf("*");

        int space2 = i;
        do
        {
            if(space2 == mid)
                break;
            ++space2;
            printf(" ");
        }
        while(space2 < mid);

        int space3 = i;
        do
        {
            if(space3 == mid - 1)
                break;
            ++space3;
            printf(" ");
        }
        while(space3 < mid);
        if(i != mid)
        printf("*");

        printf("\n");
        i++;
    }
    while(i <= mid);

    int ii = 1;
    do
    {
        int space4 = ii;
        do
        {
            if(space4 == mid - 1)
                break;
            printf(" ");
            space4++;
        }
        while(space4 < mid);
        printf("*");

        int space5 = 1;
        do
        {
            if(space5 == ii)
            break;
            printf(" ");
            space5++;
        }
        while(space5 <= ii);

        int space6 = 1;
        do
        {
            printf(" ");
            space6++;
        }
        while(space6 <= ii);
        printf("*");

        printf("\n");
        ii++;
    }
    while(ii < mid);

    return 0;
}

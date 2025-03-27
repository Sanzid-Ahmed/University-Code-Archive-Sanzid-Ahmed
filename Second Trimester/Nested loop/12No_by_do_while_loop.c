#include <stdio.h>

int main()
{
    int n, i = 1, ii = 1;
    scanf("%d", &n);

    int nn = (n - 1) / 2;

    do
    {
        int space = i;
        do
        {
            if(space == nn + 1)
                break;
            printf(" ");
            space++;
        }
        while(space <= nn);

        int j = 1;
        do
        {
            printf("*");
            j++;
        }
        while(j <= i);

        int k = 1;
        do
        {
            if(k == i)
                continue;
            printf("*");
            k++;
        }
        while(k < i);

        printf("\n");
        i++;
        ii+=2;
    }
    while(ii <= n);

    do
    {

    }
}

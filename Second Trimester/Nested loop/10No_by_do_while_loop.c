#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    do
    {
        int space = i;
        do
        {
            if(space == n)
            break;

            printf(" ");
            space++;
        }
        while(space < n);

        int j = 1;
        do
        {
            printf("*");
            j++;
        }
        while(j <= i);

        printf("\n");

        i++;
    }
    while(i <= n);

    return 0;
}

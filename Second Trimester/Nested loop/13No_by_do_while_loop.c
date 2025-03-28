#include <stdio.h>

int main()
{
    int n, i = 1;

    scanf("%d", &n);

    do
    {
        int j = 1;
        do
        {
            printf("%d", j);
            j++;
        }
        while(j <= i);

        int space = i;
        do
        {
            printf(" ");
            space++;
            if(space == n - 1)
            {
                 break;
            }
        }
        while(space <= n);

        int space2 = i + 1;
        do
        {
            printf(" ");
            space2++;
        }
        while(space2 <= n);

        int k = i;
        do
        {
            printf("%d", k);
            k--;
        }
        while(k > 0);

        i++;
        printf("\n");
    }
    while(i <= n);

    return 0;
}

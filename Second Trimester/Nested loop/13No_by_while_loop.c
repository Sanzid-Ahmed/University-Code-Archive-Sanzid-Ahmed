#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            printf("%d", j);
            j++;
        }

        int space = i;
        while(space < n)
        {
            printf(" ");
            space++;
        }

        int space2 = i +1;
        while(space2 < n)
        {
            printf(" ");
            space2++;
        }

        int l = 1;

        if(i == n)
        {
            int k = i - 1;
            while(k > 0)
            {
                printf("%d", k);
                k--;
            }
        }
        else
        {
            int k = i;
            while(k > 0)
            {
                printf("%d", k);
                k--;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}

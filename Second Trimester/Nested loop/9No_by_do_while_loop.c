#include <stdio.h>

int main()
{
    int n, i = 1, a = 1;
    scanf("%d", &n);

    do
    {
        int j = 1;
        do
        {
            if(a % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            j++;
            a++;
        }
        while(j <= n);

        printf("\n");
        i++;
    }
    while(i <= n);

    return 0;
}

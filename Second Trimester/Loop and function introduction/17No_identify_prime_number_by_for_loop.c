#include <stdio.h>

int main()
{
    int i, n, flag = 0;
    scanf("%d", &n);

    if(n == 1 || n == 0)
        {
            printf("Not prime\n");
            flag = 1;
        }

        for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("Not prime\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    printf("prime\n");


    return 0;
}

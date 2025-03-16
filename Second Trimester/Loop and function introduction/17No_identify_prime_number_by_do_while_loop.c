#include <stdio.h>

int main()
{
    int i = 2, n, flag = 0;
    scanf("%d", &n);

    if(n == 1 || n == 0)
    {
        printf("Not prime\n");
        flag = 1;
    }

    do
    {
        if(n % i == 0)
        {
            printf("Not prime\n");
            flag = 1;
            break;
        }
        i++;
    }
    while(i < n);

    if(flag == 0)
    {
        printf("Prime\n");
    }

    return 0;
}

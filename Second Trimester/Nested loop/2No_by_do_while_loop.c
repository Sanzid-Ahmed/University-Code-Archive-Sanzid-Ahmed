#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    do
    {
        int a = i;
        int j = 1;
        do
        {
            printf("%d",a);
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

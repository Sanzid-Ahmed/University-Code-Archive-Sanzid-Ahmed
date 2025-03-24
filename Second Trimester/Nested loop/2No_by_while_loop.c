#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int j = 1;
        int a = i;
        while(j <= n)
        {
            printf("%d", a);
            j++;
            a++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

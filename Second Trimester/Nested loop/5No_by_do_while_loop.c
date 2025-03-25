#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    do
    {
        int j = 1, a = n;

        do
        {
            printf("%d", a);
            a--;
            j++;
        }
        while(j <= i);

        printf("\n");
        i++;
    }
    while(i <= n);
}

#include <stdio.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int a = n, j = 1;

        while(j <= i)
        {
           printf("%d", a);
           a--;
           j++;
        }
        printf("\n");

        i++;

    }
}

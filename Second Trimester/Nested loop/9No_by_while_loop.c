#include <stdio.h>

int main()
{
    int n, i = 1, a = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            if(a % 2 == 0)
            printf("0");
            else
            printf("1");


            j++;
            a++;
        }
        printf("\n");

        i++;
    }
}

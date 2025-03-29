#include <stdio.h>

int main()
{
    int n;
    do
    {
    printf("Please enter an odd number: ");
    scanf("%d", &n);
    }
    while(n % 2 == 0);

    int mid = ((n - 1) / 2 ) + 1;

    for(int i = 1; i <= n; i++)
    {
        if(i == mid)
        {
            for(int j = 1; j <= n; j++)
            {
                printf("H");
            }
        }
        else
        {
            printf("H");
            for(int k = 1; k < n - 1; k++)
            {
                printf(" ");
            }
            printf("H");
        }
        printf("\n");
    }
    return 0;
}

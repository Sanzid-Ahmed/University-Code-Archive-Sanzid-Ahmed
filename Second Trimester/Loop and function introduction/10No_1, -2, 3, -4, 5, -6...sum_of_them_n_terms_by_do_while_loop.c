#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    scanf("%d", &n);

    do
    {
        if(i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
        i++;
    }
    while(i <= n);

    printf("%d", sum);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0;

    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    int j = 0, sum = 0;
    do
    {
        sum += a[j];
        j++;
    }
    while(j < n);

    printf("The sum of the integer: %d", sum);

    return 0;
}

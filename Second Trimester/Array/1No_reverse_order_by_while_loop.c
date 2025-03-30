#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    int a[n];

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int j = n - 1;

    printf("The given numbers reverse order are: ");
    while(j >= 0)
    {
        printf("%d ", a[j]);
        j--;
    }
    return 0;
}

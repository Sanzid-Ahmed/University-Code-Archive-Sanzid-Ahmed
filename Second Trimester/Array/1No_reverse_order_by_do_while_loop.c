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

    int j = n - 1;
    printf("The given numbers reverse order are: ");
    do
    {
        printf("%d", a[j]);
        j--;
    }
    while(j > 0);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);         //এত লেখা দেখে & দিতে ভুলে গেছি।
    }

    int temp;
    printf("The given numbers reverse order are: ");
    for(int j = n - 1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }

    return 0;
}

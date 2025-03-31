#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int j = 0, temp, k = n - 1; j < k; j++, k--) // condition j < n দিছি।  j n / 2 তেঁ গেলেই reverse হয়ে যায় so full n গেলে আবার reverse হয়ে যাবে।
    {
        temp = a[j];
        a[j] = a[k];
        a[k] = temp;
    }

    for(int l = 0; l < n; l++)
    {
        printf("%d", a[l]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], c = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - c; i++)
    {
        for(int j = i + 1; j < n - c; j++)
        {
            if(a[i] == a[j])
            {
                a[j] = '\0';
                c++;
            }

        }

        for(int j = i; j < n - c; j++)
        {
            if(a[j] == '\0')
            a[j] = a[j + 1];
        }
    }

    for(int i = 0; i < n - c; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

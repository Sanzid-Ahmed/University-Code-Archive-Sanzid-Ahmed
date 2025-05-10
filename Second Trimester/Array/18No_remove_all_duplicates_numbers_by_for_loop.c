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

    for(int i = 0; i < n - c; i++) // vary much important - c.
    {
        for(int j = i + 1; j < n - c; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k < n; k++)
                a[k] = a[k + 1];

                c++;
            }
        }
    }

    for(int i = 0; i < n - c; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

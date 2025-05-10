#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
    {
        int m = i;

        for(int j = i; j < n; j++)
        {
            if(a[m] > a[j])
            m = j;
        }

        if(m != i)
        {
            int t = a[m];
            a[m] = a[i];
            a[i] = t;
        }
    }

    for(int i = 0; i < n; i++)
    printf("%d ", a[i]);

    return 0;
}

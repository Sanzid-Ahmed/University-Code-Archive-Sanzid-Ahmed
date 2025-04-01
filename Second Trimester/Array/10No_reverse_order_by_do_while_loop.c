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

    int j = 0, m, c = 0;
    scanf("%d", &m);

    do
    {
        if(a[j] == m)
        {
            c++;
            if(c == 1)
            printf("Found at index position:");
            if(c > 1)
            printf(", %d", j);
            else
            printf("%d", j);
        }
        j++;
    }
    while(j < n);

    if(c == 0)
        printf("NOT FOUND");

    return 0;
}

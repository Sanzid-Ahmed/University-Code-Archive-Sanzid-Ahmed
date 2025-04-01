#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0;

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int j = 0, m, c = 0, flag = 0;
    scanf("%d", &m);

    while(j < n)
    {

        if(a[j] == m)
        {
            if(c == 0)
                printf("FOUND at index position:");
            if(c > 0)
            printf(", %d", j);
            else
            printf("%d", j);
            c++;
            flag = 1;
        }
        j++;
    }
    if(flag == 0)
        printf("NOT FOUND");

    return 0;
}

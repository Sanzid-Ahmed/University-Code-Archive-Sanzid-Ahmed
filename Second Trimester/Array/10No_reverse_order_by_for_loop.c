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

    int b, c = 0, flag = 0;
    scanf("%d", &b);


    for(int j = 0; j < n; j++)
    {
        if(a[j] == b)
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
    }
    if(flag == 0)
        printf("NOT FOUND");

    return 0;
}

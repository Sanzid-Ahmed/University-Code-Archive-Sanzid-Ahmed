#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);

    if (a>b)
    {
        c = a;
        while (c % a != 0 || c % b != 0)
        {
            c+=1;
        }
        printf("LCD = %d",c);
    }
    else
    {
        c = b;
        while (c % a != 0 || c % b != 0)
        {
            c+=1;
        }
        printf("LCD = %d",c);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a[3][3];

    int i = 0;

    while(i < 3)
    {
        int j = 0;

        while(j < 3)
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    int b = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    int c = a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    int d = a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    printf("%d", b - c + d);

    return 0;
}

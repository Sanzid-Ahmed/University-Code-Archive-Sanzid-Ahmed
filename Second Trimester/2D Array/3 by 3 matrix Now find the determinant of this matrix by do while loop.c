#include <stdio.h>

int main()
{
    int a[3][3];

    int i = 0;

    do
    {
        int j = 0;

        do
        {
            scanf("%d", &a[i][j]);
            j++;
        }
        while(j < 3);

        i++;
    }
    while(i < 3);

    printf("%d", (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])) - (a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])) + (a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0])));

    return 0;
}

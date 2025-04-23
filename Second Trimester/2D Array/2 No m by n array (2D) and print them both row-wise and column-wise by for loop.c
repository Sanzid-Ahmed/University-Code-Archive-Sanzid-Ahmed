#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(i == 0 && j == 0)
            printf("Row wise: ");
            printf("%d ", a[i][j]);
        }
    }

    printf("\n\n");

    for(int i = 0; i < c; i++) // I need to be concerned about column and row management !!
    {
        for(int j = 0; j < r; j++)
        {
            if(i == 0 && j == 0)
            printf("Column wise: ");
            printf("%d ", a[j][i]);
        }
    }

    return 0;
}
